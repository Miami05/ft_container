/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_ft_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:49:06 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 22:08:15 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"
#include <stdio.h>

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
