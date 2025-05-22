/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:25:38 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 16:15:57 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

size_t	ft_stack_vec_size(t_stack_vec *vec)
{
	if (!vec || !vec->vec)
		return (1);
	return (ft_vector_size(vec->vec));
}

size_t	ft_stack_vec_two_d_size(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d)
		return (1);
	return (ft_vector_size_two_d(vec_2d->vec_2d));
}

size_t	ft_stack_list_size(t_stack_list **head)
{
	if (!head || !(*head))
		return (1);
	return (ft_list_size(&(*head)->list));
}

size_t	ft_stack_double_list_size(t_stack_double_list **head)
{
	if (!head || !(*head) || !(*head)->list_2d)
		return (1);
	return (ft_double_list_size(&(*head)->list_2d));
}
