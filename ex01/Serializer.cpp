/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 22:23:47 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/20 14:37:31 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &/*cpy*/) {}

Serializer::~Serializer() {}


Serializer&	Serializer::operator=(const Serializer& /*rhs*/) {
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t uint = reinterpret_cast<uintptr_t>(ptr);
    return uint;
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
