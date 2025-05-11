/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:42:09 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/11 17:31:53 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_vector.h"
#include <stdio.h>

void	print_error(t_vector_two_d *vec_2d, t_vector *vec, char *mssg)
{
	printf("%s\n", mssg);
	ft_vector_destroy(vec);
	ft_vector_destroy_two_d(vec_2d);
	return ;
}
