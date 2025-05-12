/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:01:13 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/12 21:37:54 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

void	ft_vector_set_two_d(t_vector_two_d *vec, size_t row,
			size_t col, void *elements)
{
	if (!vec || row >= vec->row || col >= vec->data[row]->size)
	{
		write(2, "It should be in the size bounds\n", 33);
		return ;
	}
	ft_vector_set(vec->data[row], col, elements);
}

void	ft_vector_set(t_vector *vec, size_t index, void *elements)
{
	void		*dest;

	if (!vec || index >= vec->size)
	{
		write(2, "It should be in the size bounds\n", 33);
		return ;
	}
	dest = (char *)vec->data + (index * vec->element_size);
	memcpy(dest, elements, vec->element_size);
}
