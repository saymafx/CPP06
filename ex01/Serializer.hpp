/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 22:23:11 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/20 14:37:10 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"


class Serializer {
	private:

		Serializer();
		Serializer(const Serializer& cpy);
		Serializer& operator=(const Serializer& rhs);
		~Serializer();

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


