/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:28:27 by arudy             #+#    #+#             */
/*   Updated: 2022/06/08 14:38:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"
using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	char		buff[17];
	time_t		timer;
	struct tm	*time_info;

	time(&timer);
	time_info = localtime(&timer);
	strftime(buff, 17, "%Y%m%d_%H%M%S", time_info);
	cout << "[" << buff << "] ";
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
	cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals;
	cout << endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += this->_amount;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	cout << ";created" << endl;
}

Account::~Account()
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	cout << ";closed" << endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	cout << ";nb_deposits:" << this->_nbDeposits << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	cout << ";nb_withdrawals:" << this->_nbWithdrawals << endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	cout << endl;
}
