/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 06:42:53 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/19 20:05:29 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){

	if (ac != 2){
		std::cerr << "Wrong Usage : ./ex arg\n";
		exit(EXIT_FAILURE);
	}
	else {
		try{
			Convert C(av[1]);
		}
		catch (std::exception &e){
			std::cout << "Exception caught :" << e.what()<<std::endl;
		}
	}
	return 0;
}