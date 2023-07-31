/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 06:43:20 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/19 20:47:55 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

Convert::Convert(){}

Convert::~Convert(){
	std::cout<< "Destructor called\n";
}

Convert::Convert(char* str): _args(str) {
	std::cout<< "Parametr constructor called\n";
	this->convert();
}

Convert::Convert(Convert const &copy){
	this->_char = copy._char;
	this->_double = copy._double;
	this->_int = copy._int;
	this->_float = copy._float;
	this->_args = copy._args;
}

Convert&	Convert::operator=(const Convert &rhs){
	this->_char = rhs._char;
	this->_double = rhs._double;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_args = rhs._args;
	return *this;
}

bool Convert::IsInt() {
	int i = 0;
	while (_args[i])
	{
		if(i == 0 && (_args[i] == '-' || _args[i] == '+'))
			i++;
		if(_args[i] < 48 || _args[i] > 57)
			return false;
		i++;
	}
	return true;
}

bool Convert::IsFloat() {
	int i = 0;
	if (_args == "nanf" || _args == "+inff" || _args == "-inff") {
        return true;
    }
	while (_args[i])
	{
		if(i == 0 && (_args[i] == '-' || _args[i] == '+')){
			 if(_args[1] == '.')
				i++;
			// 	return false;
			i++;
		}
		if((_args[i] < 48 || _args[i] > 57) && _args[i] != '.'){
			if(_args[i] != 'f' && _args[i + 1] != '\0')
				return false;
		}
		i++;
	}
	if(_args[0] == '.' || _args[i - 1] != 'f' || _args[i - 2] == '.')
		return false;
	return true;
}

bool Convert::IsDouble() {
	int i = 0;
	if (_args == "nan" || _args == "+inf" || _args == "-inf") {
        return true;
    }
	while (_args[i])
	{
		if(i == 0 && (_args[i] == '-' || _args[i] == '+'))
			i++;
		if((_args[i] < 48 || _args[i] > 57) && _args[i] != '.')
			return false;
		i++;
	}
	if(_args[0] == '.' || _args[i - 1] == '.')
		return false;
	return true;
}

bool Convert::IsChar() {
	if(_args[0] != '\0' && _args[1] == '\0')
		return true;
	return false;
}

void Convert::convert(){
	if (this->IsInt()){
		_int = atoi(_args.c_str());
		if ((_int >= 0 && _int <= 31) || _args[0] == '-')
			std::cout<<"char: " << "Non displayable"<<std::endl;
		else
			std::cout<<"char: " << static_cast<char>(_int) <<std::endl;
		std::cout << "int: "<<_int<<std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(_int) << "f"<<std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(_int) << std::endl;
	}
	else if (this->IsChar()){
		_char = _args[0];
		if ((_char >= 0 && _char <= 31) || _args[0] == '-')
			std::cout<<"char: " << "Not displayable char"<<std::endl;
		else
			std::cout << "char: " << static_cast<char>(_char) <<std::endl;
		std::cout << "int: "<<static_cast<int>(_char)<<std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(_char) << "f"<<std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(_char) << std::endl;
	}
	else if (this->IsFloat()){
		_float = static_cast<float>(atof(_args.c_str()));
		if (_args == "nanf" || _args == "+inff" || _args == "-inff"){
		std::cout << "char: conversion impossible" << std::endl;
		std::cout << "int: conversion impossible" << std::endl;
		std::cout << "float: " << _args << std::endl;
		_args.erase(_args.end() - 1);
		std::cout << "double: " << _args << std::endl;
		return;
		}
		else if ((_float >= 0 && _float <= 31) || _args[0] == '-')
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(_float) << std::endl;
		std::cout << "int: " << static_cast<int>(_float) << std::endl;
		std::cout << "float: " << std::fixed<<std::setprecision(2) << _float << "f"<<std::endl;
		std::cout << "double: " << std::fixed<<std::setprecision(2) << static_cast<double>(_float) << std::endl;
	}
	else if (this->IsDouble()){
		_double = atof(_args.c_str());
		if (_args == "nan" || _args == "+inf" || _args == "-inf"){
		std::cout << "char: conversion impossible" << std::endl;
		std::cout << "int: conversion impossible" << std::endl;
		std::cout << "float: " << _args << "f" << std::endl;
		std::cout << "double: " << _args << std::endl;
		return;
		}
		else if ((_double >= 0 && _double <= 31) || _args[0] == '-')
			std::cout<<"char: " << "Non displayable" << std::endl;
		else
			std::cout<<"char: " << static_cast<char>(_double) << std::endl;
		std::cout<<"int: " << static_cast<int>(_double) << std::endl;
		std::cout<<"float: " << std::fixed << std::setprecision(2) << static_cast<float>(_double)<<"f"<<std::endl;
		std::cout<<"double: " << std::fixed << std::setprecision(2) << _double<<std::endl;
	}
	else
		throw(NonSenseConvertion());
}