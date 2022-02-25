NAME	= push_swap

HEADER	= push_swap.h

SRCS 	= main.c\
		  checker.c\
		  init_stack.c\
		  swap_moves.c\
		  push_moves.c\
		  rotate_moves.c\
		  reverse_rotate_moves.c\
		  utils.c\
		  utils_algo.c\
		  sort_algo.c\
		  sort_small.c

OBJS	= $(SRCS:c=o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g

RM		= rm -f

LIBFT 	= libft/libft.a

LIBFT_DIR = libft

# Colors #
GREEN		=	\033[0;32m
YELLOW		=	\033[0;33m
RED			=	\033[0;31m
RESET       =   \033[0m

all: $(NAME) 

.SILENT: $(OBJS)

$(NAME): $(OBJS)
	@cat mkart
	@make -C $(LIBFT_DIR) --silent
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIBFT_DIR) -lft
	@echo "$(GREEN)Success!! push_swap has been created!!$(RESET)\n"

clean:
	@rm -f $(OBJS)
	@make -s clean -C $(LIBFT_DIR)
	@echo "$(YELLOW)Success, libft objects were removed.$(RESET)"
	@echo "$(YELLOW)Success, push_swap objects were removed.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@make -s fclean -C $(LIBFT_DIR)
	@echo "$(RED)Attention, push_swap has been removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
