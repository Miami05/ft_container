/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 20:42:01 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 21:22:23 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

void	ft_stack_vec_push_back(t_stack_vec *vec, void *elements)
{
	if (!vec || !vec->vec)
		return ;
	ft_vector_push_back(vec->vec, elements);
}

void	ft_stack_double_vec_push_back(t_stack_vec_2d *vec_2d, t_stack_vec *vec)
{
	if (!vec_2d || !vec_2d->vec_2d || !vec || !vec->vec)
		return ;
	ft_vector_two_d_push_back(vec_2d->vec_2d, vec->vec);
}

void	ft_stack_list_push_back(t_stack_list **head, void *data)
{
	if (!head || !(*head) || !(*head)->list)
		return ;
	ft_list_push_back(&(*head)->list, data);
}

void	ft_stack_double_list_push_back(t_stack_double_list **head, void *data)
{
	if (!head || !(*head) || !(*head)->list_2d)
		return ;
	ft_double_linked_list_push_back(&(*head)->list_2d, data);
}
