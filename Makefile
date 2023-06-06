NAME = libft.a
LIBFT = libft
FLAG = -Wall -Wextra -Werror
all:$(NAME)

$(NAME):
		@make -C $(LIBFT)
		@cp libft/libft.a .
		gcc $(FLAG) server.c $(NAME) -o server
		gcc $(FLAG) client.c $(NAME) -o client
		@echo "✅"
clean:
		@make clean -C $(LIBFT)
fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@rm -rf server client
		@echo "🗑️"
re: fclean all

.PHONY: clean fclean all
