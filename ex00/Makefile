

MSRCS = ./main.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = ./whatever.hpp

CFLAGS =  -std=c++98 -Wall -Wextra -Werror

NAME =  tmp_1

all : $(NAME)

%.o:%.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)