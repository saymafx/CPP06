# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 04:54:46 by ma1iik            #+#    #+#              #
#    Updated: 2023/05/20 14:38:47 by ma1iik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -std=c++11

SRC =	main.cpp \
		Serializer.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all : a.out

a.out : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o a.out

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf a.out

re : fclean all
