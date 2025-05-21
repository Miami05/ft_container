/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:16:25 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 16:29:11 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

bool	ft_stack_vec_is_empty(t_stack_vec *vec)
{
	if (!vec || !vec->vec)
		return (true);
	return (vec->vec->size == 0);
}

bool	ft_stack_double_vec_is_empty(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d)
		return (true);
	return (vec_2d->vec_2d->row == 0 || vec_2d->vec_2d->column == 0);
}

bool	ft_stack_list_is_empty(t_stack_list **head)
{
	if (!head || !(*head) || !(*head)->list)
		return (true);
	return (false);
}

bool	ft_stack_double_list_is_empty(t_stack_double_list **head)
{
	if (!head || !(*head) || !(*head)->list_2d)
		return (true);
	return (false);
}
