/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:45:27 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 22:56:02 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_vector.h"
#include <stdio.h>

int	main(void)
{
	t_vector_two_d	*vec_2d;
	t_vector		*vec;
	int				value[20];
	size_t			i;
	size_t			len_2d;
	size_t			len;

	vec_2d = ft_vector_create_two_d(16, 16);
	vec = ft_vector_create(sizeof(int));
	if (!vec_2d || !vec)
	{
		printf("Vectors failed to created");
		return (1);
	}
	i = 0;
	while (i < sizeof(value) / sizeof(value[0]))
	{
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
	len = ft_vector_resize(vec, 6);
	len_2d = ft_vector_resize_two_d(vec_2d, 10);
	printf("Len 2D: %zu\n Len 1D: %zu\n", len_2d, len);
}
