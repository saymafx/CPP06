# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 04:54:46 by ma1iik            #+#    #+#              #
#    Updated: 2023/05/20 14:49:40 by ma1iik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRC =	main.cpp \
		ScalarConverter.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf NAME

re : fclean all
