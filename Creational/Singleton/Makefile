NAME = logger

CXX = c++
CXX_FLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.cpp)
HDR = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HDR)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
