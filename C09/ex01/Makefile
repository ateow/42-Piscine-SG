NAME	= libft.a

SRC_DIR	= srcs

INC_DIR = includes

CFILES	= ft_putchar.c \
	ft_swap.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_strcmp.c

OBJECTS	= $(addprefix $(SRC_DIR)/, $(CFILES:.c=.o))

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS) 

$(OBJECTS): $(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	cc $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	#gcc -Wall -I includes -c srcs/ft_putchar.c -o srcs/ft_putchar.o

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:         all clean fclean re
