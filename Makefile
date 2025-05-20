# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 16:32:25 by ldurmish          #+#    #+#              #
#    Updated: 2025/05/17 01:10:30 by ldurmish         ###   ########.fr        #
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
VECTOR = $(SRC)vector/
LINKED_LISTS = $(SRC)linked_lists/

# Color codes
RESET = \033[0m
GREEN = \033[32m
RED = \033[31m

# Source files for ft_container
SRCS = $(VECTOR)init_ft_vector.c $(VECTOR)destroy_ft_vector.c $(VECTOR)push_back_ft_vector.c \
	   $(VECTOR)utils.c $(VECTOR)pop_ft_vector.c $(VECTOR)ft_vector_get.c \
	   $(VECTOR)ft_vector_set.c $(VECTOR)size_ft_vector.c $(VECTOR)ft_vector_capacity.c\
	   $(LINKED_LISTS)ft_list_create.c $(LINKED_LISTS)ft_list_push_front.c $(LINKED_LISTS)ft_list_push_back.c\
	   $(LINKED_LISTS)ft_list_pop.c $(LINKED_LISTS)ft_list_get.c $(LINKED_LISTS)ft_list_remove.c\
	   $(LINKED_LISTS)ft_list_find.c $(LINKED_LISTS)ft_list_clear.c\

MAIN_SRCS = tests/linked_lists_main.c

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
