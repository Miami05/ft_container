# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 16:32:25 by ldurmish          #+#    #+#              #
#    Updated: 2025/05/09 18:41:59 by ldurmish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name
NAME = ft_container

# Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = -I include/

# Directories
SRC = src/
VECTOR = $(SRC)vector/init_ft_vector.c

# Color codes
RESET = \033[0m
GREEN = \033[32m
RED = \033[31m

# Source files for ft_container
SRCS = $(VECTOR)
MAIN_SRCS = tests/ft_vector_main.c

# Object files
OBJ = $(SRCS:.c=.o)

# Main target
all: $(NAME)

# Compiling ft_container
$(NAME): $(OBJ)
	@echo "$(GREEN)Compiling ft_container...$(RESET)"
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) $(MAIN_SRCS) -o $(NAME)
	@echo "$(GREEN)ft_container compiled successfully$(RESET)"

# Compiled individual object files
$(SRC)%.o: $(SRC)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Clean object files
clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJ)
	@echo "$(RED)Executables cleaned successfully$(RESET)"

# Removing all (including executables)
fclean: clean
	@echo "$(RED)Cleaning executables...$(RESET)"
	@rm -f $(NAME)
	@echo "$(RED)Executables cleaned successfully$(RESET)"

re: fclean all

# individual test builds
test_vector:
	$(CC) $(CFLAGS) tests/ft_vector_main.c $(VECTOR) -o test_vector
	@rm -f test_vector

# Compiling valgrind
valgrind: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) $(ARGS)

# Phony target
.PHONY: all clean fclean re test_vector
