/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:38:46 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/10 21:01:13 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H

# define FT_VECTOR_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_vector
{
	void	*data;
	size_t	capacity;
	size_t	element_size;
	size_t	size;
}	t_vector;

typedef struct s_vector_two_d
{
	t_vector	**data;
	size_t		row;
	size_t		column;
}	t_vector_two_d;

// 1D array functions
t_vector		*ft_vector_create(size_t element_size);
void			ft_vector_destroy(t_vector *vec);
t_vector		*ft_vector_push_back(t_vector *vec, void *elements);

// 2D array functions
t_vector_two_d	*ft_vector_create_two_d(size_t column, size_t row);
void			ft_vector_destroy_two_d(t_vector_two_d *vec);

#endif
