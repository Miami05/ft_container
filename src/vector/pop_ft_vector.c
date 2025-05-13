/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_ft_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:45:13 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 13:24:30 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

void	pop_back_two_d(t_vector_two_d *vec)
{
	size_t		last_index;

	if (vec == NULL || vec->row == 0)
	{
		write(2, "Cannot pop the row. The row is empty\n", 38);
		return ;
	}
	last_index = vec->row - 1;
	if (vec->data[last_index])
	{
		ft_vector_destroy(vec->data[last_index]);
		free(vec->data[last_index]);
		vec->data[last_index] = NULL;
	}
	vec->row--;
}

void	pop_back(t_vector *vec)
{
	if (vec->size > 0)
		vec->size--;
	else
	{
		write(2, "Vector is NULL cannot pop\n", 27);
		return ;
	}
}
