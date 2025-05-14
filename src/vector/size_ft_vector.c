/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_ft_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:21:38 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 21:38:39 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

size_t	ft_vector_resize(t_vector *vec, size_t new_size)
{
	size_t		new_capacity;
	void		*new_data;

	if (!vec)
		return (1);
	if (new_size > vec->capacity)
	{
		new_capacity = new_size;
		new_data = realloc(vec->data, new_capacity * vec->element_size);
		if (!new_data)
			return (1);
		vec->data = new_data;
		vec->capacity = new_capacity;
	}
	vec->size = new_size;
	return (vec->size);
}

size_t	ft_vector_resize_two_d(t_vector_two_d *vec, size_t new_row)
{
	size_t		i;

	i = vec->row;
	while (i < new_row)
	{
		vec->data[i] = malloc(sizeof(t_vector *) * vec->column);
		if (!vec->data[i])
			return (1);
		i++;
	}
	i = new_row;
	while (i < vec->row)
	{
		free(vec->data[i]);
		i++;
	}
	vec->data = realloc(vec->data, new_row * sizeof(t_vector *));
	if (!vec->data)
		return (1);
	vec->row = new_row;
	return (new_row);
}

size_t	ft_vector_size_two_d(t_vector_two_d *vec)
{
	if (!vec)
		return (1);
	return (vec->row * vec->column);
}

size_t	ft_vector_size(t_vector *vec)
{
	if (!vec)
		return (1);
	return (vec->size);
}
