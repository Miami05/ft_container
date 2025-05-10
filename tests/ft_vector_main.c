/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 00:02:41 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

void	print_two_d(t_vector_two_d *grid)
{
	size_t				i;
	size_t				j;
	int					value;

	i = 0;
	j = 0;
	while (i < grid->row)
	{
		j = 0;
		while (j < grid->column)
		{
			memcpy(&value, (int *)grid->data[i]->data + j, sizeof(int));
			printf("%d ", value);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	t_vector_two_d		*vec;
	size_t				i;
	size_t				j;
	int					elements;

	vec = ft_vector_create_two_d(4, 3);
	if (!vec)
	{
		printf("Failed to allocate 2d array\n");
		return (1);
	}
	i = 0;
	elements = 1;
	while (i < vec->row)
	{
		j = 0;
		while (j < vec->column)
		{
			memcpy((int *)vec->data[i]->data + j, &elements, sizeof(int));
			vec->data[i]->size++;
			elements++;
			j++;
		}
		i++;
	}
	print_two_d(vec);
	printf("\n");
}
