/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:50:23 by tidigov           #+#    #+#             */
/*   Updated: 2023/07/31 16:50:23 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>
#include <math.h>
#include <cstdlib>

class Convert
{
	private:
		int		_int;
		char	_char;
		double 	_double;
		float 	_float;
		std::string	_args;
	public:
		Convert();
		~Convert();
		Convert(Convert const &copy);
		Convert(char* str);

		Convert& operator=(Convert const &rhs);
		

		bool IsInt();
		bool IsFloat();
		bool IsChar();
		bool IsDouble();

		void	convert();

		class NonSenseConvertion : public std::exception {
			public :
			virtual const char* what() const throw(){
				return "Invalid Argument\n";
			}
		};
};