/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_capacity.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:23:53 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/13 19:26:24 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"

size_t	ft_vector_capacity_two_d(t_vector_two_d *vec)
{
	if (!vec)
		return (1);
	return (vec->capacity);
}

size_t	ft_vector_capacity(t_vector *vec)
{
	if (!vec)
		return (1);
	return (vec->capacity);
}
