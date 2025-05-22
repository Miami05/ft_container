/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_ft_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:31:11 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 20:35:56 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

void	ft_vector_destroy(t_vector *vec)
{
	if (!vec || !vec->data)
		return ;
	if (vec->data)
	{
		free(vec->data);
		vec->data = NULL;
	}
	vec->size = 0;
	vec->capacity = 0;
	vec = NULL;
}

void	ft_vector_destroy_two_d(t_vector_two_d *vec)
{
	size_t		i;

	if (!vec || !vec->data)
		return ;
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
	vec->row = 0;
	vec->column = 0;
	vec->data = NULL;
	free(vec);
}

void	del(void *ptr)
{
	free(ptr);
}

void	ft_vector_clear(t_vector *vec, void (*del)(void *))
{
	size_t		i;
	void		**ptr_array;

	if (!vec || !vec->data)
		return ;
	i = 0;
	ptr_array = (void **)vec->data;
	while (i < vec->size)
	{
		if (ptr_array && del)
			del(ptr_array[i]);
		i++;
	}
	vec->size = 0;
}

void	ft_vector_clear_two_d(t_vector_two_d *vec, void (*del)(void *))
{
	size_t		i;

	if (!vec || !vec->data)
		return ;
	i = 0;
	while (i < vec->row)
	{
		if (vec->data[i])
			ft_vector_clear(vec->data[i], del);
		i++;
	}
	vec->row = 0;
}
