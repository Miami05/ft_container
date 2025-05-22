/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:40:01 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 01:55:34 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

void	ft_stack_vec_destroy(t_stack_vec *vec)
{
	if (!vec || !vec->vec)
		return ;
	if (vec && vec->vec)
	{
		ft_vector_destroy(vec->vec);
		vec->vec = NULL;
	}
	free(vec);
}

void	ft_stack_destroy_two_d(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d)
		return ;
	if (vec_2d)
	{
		ft_vector_destroy_two_d(vec_2d->vec_2d);
		vec_2d->vec_2d = NULL;
	}
}

void	ft_stack_list(t_stack_list **head)
{
	if (!head || !(*head) || !(*head)->list)
		return ;
	if ((*head)->list)
	{
		ft_list_destroy(&(*head)->list);
		(*head)->list = NULL;
	}
	free(*head);
	*head = NULL;
}

void	ft_stack_double_list(t_stack_double_list **head)
{
	if (!head || !(*head) || !(*head)->list_2d)
		return ;
	if ((*head)->list_2d)
	{
		ft_double_list_destroy(&(*head)->list_2d);
		(*head)->list_2d = NULL;
	}
	free(*head);
	*head = NULL;
}

void	free_stacks(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
	t_stack_list **head, t_stack_double_list **double_list)
{
	if (vec_2d)
		ft_stack_destroy_two_d(vec_2d);
	if (vec && vec->vec)
		ft_stack_vec_destroy(vec);
	if (head && *head)
		ft_stack_list(head);
	if (double_list && *double_list)
		ft_stack_double_list(double_list);
}
