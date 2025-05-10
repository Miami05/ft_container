/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ft_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:33:10 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 19:29:55 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

t_vector_two_d	*free_two_d(t_vector_two_d *grid, size_t allocated_rows)
{
	size_t		j;

	if (!grid)
		return (NULL);
	if (grid->data)
	{
		j = 0;
		while (j < allocated_rows)
		{
			if (grid->data[j])
			{
				if (grid->data[j]->data)
					free(grid->data[j]->data);
				free(grid->data[j]);
			}
			j++;
		}
		free(grid->data);
	}
	free(grid);
	return (NULL);
}

t_vector_two_d	*ft_vector_create_two_d(size_t column, size_t row)
{
	t_vector_two_d	*grid;
	size_t			i;

	if (row == 0 || column == 0)
		return (NULL);
	grid = (t_vector_two_d *)malloc(sizeof(t_vector_two_d));
	if (!grid)
		return (NULL);
	grid->row = row;
	grid->column = column;
	grid->data = (t_vector **)malloc(row * sizeof(t_vector *));
	if (!grid->data)
		return (free(grid), NULL);
	i = 0;
	while (i < row)
	{
		grid->data[i] = ft_vector_create(column);
		if (!grid->data[i])
			return (NULL);
		i++;
	}
	return (grid);
}

t_vector	*ft_vector_create(size_t element_size)
{
	t_vector		*vector;

	vector = (t_vector *)malloc(sizeof(t_vector));
	if (!vector)
		return (NULL);
	vector->element_size = element_size;
	vector->size = 0;
	vector->capacity = 4;
	vector->data = malloc(vector->capacity * element_size);
	if (!vector->data)
	{
		free(vector);
		return (NULL);
	}
	return (vector);
}
