/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/12 21:58:25 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

int	main(void)
{
	t_vector_two_d		*vec;
	size_t				i;
	size_t				j;
	int					value;

	vec = ft_vector_create_two_d(4, 3);
	if (!vec)
	{
		printf("Failed to allocate the 2D array\n");
		return (1);
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			value = i * 10 + j;
			if (!ft_vector_push_back(vec->data[i], &value))
			{
				printf("Failed to push %d to row %zu\n", value, i);
				ft_vector_destroy_two_d(vec);
				return (1);
			}
			j++;
		}
		i++;
	}
	value = 100;
	ft_vector_set_two_d(vec, 2, 3, &value);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			int *res = (int *)((char *)vec->data[i]->data + j * vec->data[i]->element_size);
			printf("%d ", *res);
			j++;
		}
		printf("\n");
		i++;
	}
	ft_vector_destroy_two_d(vec);
	free(vec);
	printf("\n");
}
