/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:38:46 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/14 12:41:00 by ldurmish         ###   ########.fr       */
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
	size_t		capacity;
}	t_vector_two_d;

// 1D array functions
t_vector		*ft_vector_create(size_t element_size);
void			ft_vector_destroy(t_vector *vec);
t_vector		*ft_vector_push_back(t_vector *vec, void *elements);
void			pop_back(t_vector *vec);
void			*ft_vector_get(t_vector *vec, size_t index);
void			ft_vector_set(t_vector *vec, size_t index, void *elements);
size_t			ft_vector_size(t_vector *vec);
size_t			ft_vector_capacity(t_vector *vec);
size_t			ft_vector_resize(t_vector *vec, size_t new_size);
void			ft_vector_clear(t_vector *vec, void (*del)(void *));

// 2D array functions
t_vector_two_d	*ft_vector_create_two_d(size_t column, size_t row);
void			ft_vector_destroy_two_d(t_vector_two_d *vec);
t_vector_two_d	*ft_vector_two_d_push_back(t_vector_two_d *vec,
					t_vector *new_row);
void			pop_back_two_d(t_vector_two_d *vec);
void			*ft_vector_two_d_get(t_vector_two_d *vec, size_t row_index,
					size_t col_index);
void			ft_vector_set_two_d(t_vector_two_d *vec, size_t row,
					size_t col, void *elements);
size_t			ft_vector_size_two_d(t_vector_two_d *vec);
size_t			ft_vector_capacity_two_d(t_vector_two_d *vec);
size_t			ft_vector_resize_two_d(t_vector_two_d *vec, size_t new_row);
void			ft_vector_clear_two_d(t_vector_two_d *vec, void (*del)(void *));

// Utils for vectors
void			print_error(t_vector_two_d *vec_2d, t_vector *vec, char *mssg);

#endif
