/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:51:18 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:51:18 by tidigov          ###   ########.fr       */
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
