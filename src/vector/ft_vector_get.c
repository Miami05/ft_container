/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:53:26 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/12 16:50:57 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"
#include <stdio.h>

void	*ft_vector_two_d_get(t_vector_two_d *vec, size_t row_index,
	size_t col_index)
{
	char		*base;

	if (!vec || row_index >= vec->row
		|| col_index >= vec->data[row_index]->size)
	{
		write(2, "Row and columns should be in the bounds\n", 41);
		return (NULL);
	}
	base = (char *)vec->data[row_index]->data;
	return ((void *)(base + (col_index * vec->data[row_index]->element_size)));
}

void	*ft_vector_get(t_vector *vec, size_t index)
{
	char		*base;

	if (!vec || index >= vec->size)
	{
		write(2, "Index should be in the size bounds\n", 37);
		return (NULL);
	}
	base = (char *)vec->data;
	return ((void *)(base + (index * vec->element_size)));
}
