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
