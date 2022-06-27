/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:34:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/27 14:32:31 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
/*
	En informatique, la sérialisation est le codage d'une information sous la forme d'une
	suite d'informations plus petites pour, par exemple la sauvegarder ou la transporter.
	L'activité réciproque, visant à décoder cette suite pour créer une copie conforme de
	l'information d'origine, s'appelle la désérialisation (ou unmarshalling).

	Reinterpret cast car le plus permissif, on ne sait pas forcement la nature de la donnée que l'on
	aura en entré. Compile dans tous les cas, mais peut causer des problèmes à l'exec !
*/

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
