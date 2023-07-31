/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:49:57 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:49:57 by tidigov          ###   ########.fr       */
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