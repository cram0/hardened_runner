NAME        =       hrunner

SRC         =       $(shell find . -name '*.cpp')

OBJ         =       $(SRC:.cpp=.o)

CXXFLAGS    +=      -Wall -Wextra -Wno-unused-parameter

CXXFLAGS    +=      -I./include -lsfml-graphics -lsfml-window -lsfml-system \
					-lsfml-audio

all         :       $(NAME)

$(NAME)     :       $(OBJ)
					g++ -o $(NAME) $(OBJ) -g -O0

clean       :
					find . -name "*.o" -type f -delete
					find . -name "vgcore.*" -type f -delete

fclean      :       clean
					rm -f $(NAME)

re          :       fclean all


launch      :       re clean
					clear
					./$(NAME)

vg          :       re clean
					clear
					valgrind ./$(NAME)