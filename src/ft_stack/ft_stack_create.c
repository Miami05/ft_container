/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:37:31 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 15:26:06 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

t_stack_vec	*stack_create(size_t elements_size)
{
	t_stack_vec		*new;

	new = malloc(sizeof(t_stack_vec));
	if (!new)
		return (NULL);
	new->vec = ft_vector_create(elements_size);
	if (!new->vec)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

t_stack_vec_2d	*stack_double_create(size_t column, size_t row)
{
	t_stack_vec_2d	*stack;

	stack = malloc(sizeof(t_stack_vec_2d));
	if (!stack)
		return (NULL);
	stack->vec_2d = ft_vector_create_two_d(column, row);
	if (!stack->vec_2d)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

t_stack_double_list	*stack_double_list_create(void *data)
{
	t_stack_double_list	*stack;

	stack = malloc(sizeof(t_stack_double_list));
	if (!stack)
		return (NULL);
	stack->list_2d = ft_double_list_create(data);
	if (!stack->list_2d)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}

t_stack_list	*stack_list_create(void *data)
{
	t_stack_list	*stack;

	stack = malloc(sizeof(t_stack_list));
	if (!stack)
		return (NULL);
	stack->list = ft_list_create(data);
	if (!stack->list)
	{
		free(stack);
		return (NULL);
	}
	return (stack);
}
