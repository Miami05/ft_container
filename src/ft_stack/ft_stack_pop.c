/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:12:09 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 20:37:59 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

void	ft_stack_vec_pop(t_stack_vec *vec)
{
	if (!vec || !vec->vec)
		return ;
	pop_back(vec->vec);
}

void	ft_stack_vec_two_d_pop(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d)
		return ;
	pop_back_two_d(vec_2d->vec_2d);
}

void	ft_stack_list_pop(t_stack_list **head)
{
	if (!head || !(*head) || !(*head)->list)
		return ;
	ft_list_pop_back(&(*head)->list);
}

void	ft_stack_double_list_pop(t_stack_double_list **head)
{
	if (!head || !(*head) || !(*head)->list_2d)
		return ;
	ft_double_list_pop_back(&(*head)->list_2d);
}
