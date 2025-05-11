/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_ft_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:49:06 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/11 01:51:05 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

t_vector_two_d	*ft_vector_two_d_push_back(t_vector_two_d *vec,
	t_vector *new_row)
{
	t_vector		**new_data;
	size_t			new_capacity;

	if (!vec || !new_row)
		return (NULL);
	new_capacity = vec->row + 1;
	if (new_capacity > vec->row)
	{
		if (vec->row == 0)
			new_capacity = 1;
		else
			new_capacity = vec->row * 2;
		new_data = realloc(vec->data, new_capacity * 2 * sizeof(t_vector *));
		if (!new_data)
			return (NULL);
		vec->data = new_data;
	}
	vec->data[vec->row] = new_row;
	vec->row++;
	return (vec);
}

t_vector	*ft_vector_push_back(t_vector *vec, void *elements)
{
	void			*new_array;
	void			*new_data;

	if (vec->size == vec->capacity)
	{
		vec->capacity *= 2;
		new_data = realloc(vec->data, vec->capacity * vec->element_size);
		if (!new_data)
		{
			free(vec->data);
			new_data = NULL;
			return (NULL);
		}
		vec->data = new_data;
	}
	new_array = (char *)vec->data + (vec->size * vec->element_size);
	memcpy(new_array, elements, vec->element_size);
	vec->size++;
	return (vec);
}
