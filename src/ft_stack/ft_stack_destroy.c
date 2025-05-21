/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:40:01 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 21:59:12 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

void	ft_stack_vec_destroy(t_stack_vec *vec)
{
	ft_vector_destroy(vec->vec);
}

void	ft_stack_destroy_two_d(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d)
		return ;
	if (vec_2d->vec_2d)
		ft_vector_destroy_two_d(vec_2d->vec_2d);
}

void	ft_stack_list(t_stack_list **head)
{
	ft_list_destroy(&(*head)->list);
}

void	ft_stack_double_list(t_stack_double_list **head)
{
	ft_double_list_destroy(&(*head)->list_2d);
}

void	free_stacks(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
	t_stack_list **head, t_stack_double_list **double_list)
{
	if (vec)
		ft_stack_vec_destroy(vec);
	if (vec_2d)
		ft_stack_destroy_two_d(vec_2d);
	if (head && *head)
		ft_stack_list(head);
	if (double_list && *double_list)
		ft_stack_double_list(double_list);
}
