/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 06:42:53 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/20 14:33:56 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data data;
    data.val = 42;

    std::cout << "Original address of data: " << &data << std::endl;

    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized data: " << serialized << std::endl;	

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized address: " << deserialized << std::endl;

    if (&data == deserialized) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
    } else {
        std::cout << "Something went wrong!" << std::endl;
    }

    return 0;
}
