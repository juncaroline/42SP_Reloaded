NAME = ft_display_file

SRC = ft_display_file.c
OBJS = $(SRC:.c=.o)
INC = includes
CC = gcc
CFLAG = -Wall -Wextra -Werror -I$(INC)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
