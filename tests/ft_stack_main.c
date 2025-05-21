/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:44:35 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 21:52:48 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_stack.h"

void	push_back_to_stack(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
	t_stack_double_list **head_2d, t_stack_list **head)
{
	void				*str;

	str = "Hello World how it is going";
	ft_stack_vec_push_back(vec, str);
	ft_stack_double_vec_push_back(vec_2d, vec);
	ft_stack_list_push_back(head, str);
	ft_stack_double_list_push_back(head_2d, str);
	if (ft_stack_vec_is_empty(vec) || ft_stack_double_vec_is_empty(vec_2d)
		|| ft_stack_list_is_empty(head)
		|| ft_stack_double_list_is_empty(head_2d))
		return ;
	ft_stack_vec_push_back(vec, str);
	ft_stack_double_vec_push_back(vec_2d, vec);
	ft_stack_list_push_back(head, str);
	ft_stack_double_list_push_back(head_2d, str);
}

int	main(void)
{
	t_stack_vec			*stack_vec;
	t_stack_vec_2d		*stack_vec_2d;
	t_stack_double_list	*stack_double_list;
	t_stack_list		*stack_list;
	void				*data;

	stack_vec = stack_create(sizeof(int));
	if (!stack_vec)
		return (1);
	stack_vec_2d = stack_double_create(3, 5);
	if (!stack_vec_2d)
		return (1);
	data = "Hello World";
	stack_double_list = stack_double_list_create(data);
	if (!stack_double_list)
		return (1);
	stack_list = stack_list_create(data);
	if (!stack_list)
		return (1);
	push_back_to_stack(stack_vec, stack_vec_2d, &stack_double_list,
		&stack_list);
	free_stacks(stack_vec, stack_vec_2d, &stack_list, &stack_double_list);
}
