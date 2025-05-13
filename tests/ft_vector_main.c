/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 14:30:06 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

int	main(void)
{
	t_vector_two_d	*vec;
	size_t			len;
	int				value;
	size_t			i;
	size_t			j;

	vec = ft_vector_create_two_d(sizeof(int), 4);
	if (!vec)
	{
		printf("Vector failed to created");
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			value = i * 10 + j;
			if (!ft_vector_push_back(vec->data[i], &value))
			{
				printf("Failed to push the values to vector\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	len = ft_vector_size_two_d(vec);
	printf("Len is : %zu\n", len);
	ft_vector_destroy_two_d(vec);
	free(vec);
}
