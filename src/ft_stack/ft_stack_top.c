/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:38:42 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 19:06:35 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_stack.h"

void	*ft_stack_vec_top(t_stack_vec *vec)
{
	if (!vec || !vec->vec)
		return (NULL);
	return (vec->vec->data + ((vec->vec->size - 1) * vec->vec->element_size));
}

void	*ft_stack_two_d_top(t_stack_vec_2d *vec_2d)
{
	if (!vec_2d || !vec_2d->vec_2d || !vec_2d->vec_2d->data)
		return (NULL);
	return (vec_2d->vec_2d->data[vec_2d->vec_2d->row - 1]);
}

void	*ft_stack_list_top(t_stack_list **head)
{
	if (!head || !(*head) || !(*head)->list)
		return (NULL);
	return ((*head)->list->data);
}

void	*ft_stack_double_list_top(t_stack_double_list **head)
{
	if (!head || !(*head) || !(*head)->list_2d || !(*head)->list_2d->data)
		return (NULL);
	return ((*head)->list_2d->data);
}
