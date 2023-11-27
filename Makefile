CC		:= gcc
FLAGS	:= -Wall -Wextra -Werror
BUFFER	 := 42
RM		 := rm -f 

NAME	:= get_next_line.a

SRCS	:= get_next_line.c get_next_line_utils.c 

$(NAME):	$(SRCS) $(OBJS)
			$(CC) $(FLAGS) main.c $(NAME) && ./a.out

all:	$(NAME)

.c.o:	$(RM) $(OBJS) -D BUFFER_SIZE=$(BUFFER) -c $< -o $(<:.c=.o)

clean: $(RM) $(OBJS) a.out

fclean: clean $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
/* using := is a common practice in Makefiles to avoid unexpected behavior and improve efficiency when dealing with variables. */

// '=' is a simple assignement, 
// ':=' is an Immediate assignment





