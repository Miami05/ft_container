/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 22:51:06 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

int	main(void)
{
	t_vector				*vec;
	size_t					i;
	int						value;

	vec = ft_vector_create(sizeof(int));
	if (!vec)
	{
		printf("Failed to allocate 2d array\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		value = (int)i;
		ft_vector_push_back(vec, &value);
		i++;
	}
	value = 10;
	vec = ft_vector_push_back(vec, &value);
	i = 0;
	while (i < vec->size)
	{
		memcpy(&value,
			(char *)vec->data + (i * vec->element_size), vec->element_size);
		printf("%d ", value);
		i++;
	}
	ft_vector_destroy(vec);
	free(vec);
	printf("\n");
}
