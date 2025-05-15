/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 10:39:34 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

void	print_two_d(t_vector_two_d *vec_2d)
{
	size_t		i;
	size_t		j;
	t_vector	*row;
	int			*value;

	i = 0;
	while (i < vec_2d->row)
	{
		row = vec_2d->data[i];
		if (vec_2d->data[i])
		{
			j = 0;
			while (j < row->size)
			{
				value = (int *)((char *)row->data + (j * row->element_size));
				printf("%d ", *value);
				j++;
			}
		}
		i++;
	}
}

void	print_vectors(t_vector *vec, t_vector_two_d *vec_2d)
{
	size_t		i;
	int			*value;

	i = 0;
	while (i < vec->size)
	{
		value = (int *)((char *)vec->data + (i * vec->element_size));
		printf("%d ", *value);
		i++;
	}
	printf("\n");
	print_two_d(vec_2d);
}

int	push_to_vector(t_vector *vec, t_vector_two_d *vec_2d)
{
	size_t		i;
	int			value[20];

	i = 0;
	while (i < sizeof(value) / sizeof(value[0]))
	{
		value[i] = i + 1;
		if (!ft_vector_push_back(vec, &value[i]))
		{
			printf("Failed to push the elemets\n");
			return (1);
		}
		i++;
	}
	if (!ft_vector_two_d_push_back(vec_2d, vec))
	{
		printf("Failed to push the elements at 2D vector\n");
		return (1);
	}
	print_vectors(vec, vec_2d);
	return (0);
}

int	main(void)
{
	t_vector_two_d	*vec_2d;
	t_vector		*vec;

	vec_2d = ft_vector_create_two_d(16, 16);
	vec = ft_vector_create(sizeof(int));
	if (!vec_2d || !vec)
	{
		printf("Vectors failed to created");
		return (1);
	}
	if (push_to_vector(vec, vec_2d))
	{
		print_error(vec_2d, vec, "Error failed to push the number to vectors");
		return (1);
	}
	ft_vector_destroy(vec);
	ft_vector_clear(vec, NULL);
	ft_vector_destroy_two_d(vec_2d);
	ft_vector_clear_two_d(vec_2d, NULL);
	printf("\n");
}
