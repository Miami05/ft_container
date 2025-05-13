/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_ft_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:21:38 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 13:35:03 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

size_t	ft_vector_size_two_d(t_vector_two_d *vec)
{
	if (!vec)
		return (1);
	return (vec->row * vec->column);
}

size_t	ft_vector_size(t_vector *vec)
{
	if (!vec)
		return (1);
	return (vec->size);
}
