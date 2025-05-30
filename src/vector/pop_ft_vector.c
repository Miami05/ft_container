/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_ft_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:45:13 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 13:17:29 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

void	pop_back_two_d(t_vector_two_d *vec)
{
	if (vec == NULL || vec->row == 0 || !vec->data)
	{
		write(2, "Cannot pop the row. The row is empty\n", 38);
		return ;
	}
	vec->row--;
}

void	pop_back(t_vector *vec)
{
	if (!vec->data || !vec)
		return ;
	if (vec->size > 0)
		vec->size--;
	else
	{
		write(2, "Vector is NULL cannot pop\n", 27);
		return ;
	}
}
