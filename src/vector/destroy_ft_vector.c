/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_ft_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:31:11 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 21:57:11 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

void	ft_vector_destroy(t_vector *vec)
{
	if (vec->data)
	{
		free(vec->data);
		vec->data = NULL;
	}
	vec->size = 0;
	vec->capacity = 0;
}

void	ft_vector_destroy_two_d(t_vector_two_d *vec)
{
	size_t		i;

	if (vec->data)
	{
		i = 0;
		while (i < vec->row)
		{
			if (vec->data[i])
			{
				if (vec->data[i]->data)
				{
					free(vec->data[i]->data);
					vec->data[i]->data = NULL;
				}
				free(vec->data[i]);
				vec->data[i] = NULL;
			}
			i++;
		}
		free(vec->data);
		vec->data = NULL;
	}
	vec->row = 0;
	vec->column = 0;
}
