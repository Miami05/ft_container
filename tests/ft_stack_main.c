/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:44:35 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/22 21:17:34 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_stack.h"

void	print_stacks(t_stack_vec *vec, t_stack_list **head,
	t_stack_double_list **head_2d)
{
	size_t			i;
	t_list			*temp;
	t_double_list	*double_list;

	printf("\nVec elements are: ");
	i = 0;
	while (i < vec->vec->size)
	{
		printf("%d ", *(int *)((char *)(vec->vec->data + i * vec->vec->element_size)));
		i++;
	}
	printf("\nLnked List elements are: ");
	temp = (*head)->list;
	while (temp)
	{
		printf("%s ", (char *)temp->data);
		temp = temp->next;
	}
	printf("\nDouble Linked Lists elements are: ");
	double_list = (*head_2d)->list_2d;
	while (double_list)
	{
		printf("%s ", (char *)double_list->data);
		double_list = double_list->next;
	}
}

void	print_2d_stack(t_stack_vec_2d *vec_2d)
{
	t_vector		**vector;
	t_vector		*curr_vec;
	int				*int_data;
	size_t			i;
	size_t			j;

	if (!vec_2d || !vec_2d->vec_2d || !vec_2d->vec_2d->data)
		return ;
	vector = (t_vector **)vec_2d->vec_2d->data;
	i = 0;
	printf("The elements for double vec are: ");
	while (i < vec_2d->vec_2d->row)
	{
		curr_vec = vector[i];
		int_data = (int *)curr_vec->data;
		j = 0;
		while (j < curr_vec->size)
		{
			printf("%d ", int_data[j]);
			j++;
		}
		i++;
	}
	printf("\n");
}

void	pop_stack(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
	t_stack_list **head, t_stack_double_list **head_2d)
{
	t_vector		**vectors;
	t_vector		*top;

	ft_stack_vec_pop(vec);
	ft_stack_list_pop(head);
	ft_stack_double_list_pop(head_2d);
	printf("Len of vec: %zu\n", ft_stack_vec_size(vec));
	printf("Len of two vec: %zu\n", ft_stack_vec_two_d_size(vec_2d));
	printf("Len of list: %zu\n", ft_stack_list_size(head));
	printf("Len of double linked: %zu\n", ft_stack_double_list_size(head_2d));
	if (vec && vec->vec && vec->vec->data)
		printf("The top element of vec is: %d\n", *(int *)vec->vec->data);
	if (vec_2d && vec_2d && vec_2d->vec_2d->data && vec_2d->vec_2d->row > 0)
	{
		vectors = (t_vector **)vec_2d->vec_2d->data;
		top = vectors[vec_2d->vec_2d->row - 1];
		if (top && top->size > 0)
			printf("the top element of two_d vec is: %d\n",
				*((int *)top->data + top->size - 1));
	}
	if (head && *head && (*head)->list && (*head)->list->data)
		printf("The top element is: %s\n", (char *)(*head)->list->data);
	if (head_2d && *head_2d && (*head_2d)->list_2d && (*head_2d)->list_2d->data)
		printf("The top element of double linked list is: %s\n",
			(char *)(*head_2d)->list_2d->data);
}

void	push_back_to_stack(t_stack_vec *vec, t_stack_vec_2d *vec_2d,
	t_stack_double_list **head_2d, t_stack_list **head)
{
	void				*str;
	int					value[10];
	int					i;

	i = -1;
	while (++i < 10)
	{
		value[i] = i + 1;
		ft_stack_vec_push_back(vec, &value[i]);
	}
	ft_stack_double_vec_push_back(vec_2d, vec);
	str = "Hello World How is it going";
	ft_stack_list_push_back(head, str);
	ft_stack_double_list_push_back(head_2d, str);
	if (ft_stack_vec_is_empty(vec) || ft_stack_double_vec_is_empty(vec_2d)
		|| ft_stack_list_is_empty(head)
		|| ft_stack_double_list_is_empty(head_2d))
		return ;
	ft_stack_list_push_back(head, str);
	ft_stack_double_list_push_back(head_2d, str);
	ft_stack_list_push_back(head, str);
	ft_stack_double_list_push_back(head_2d, str);
	pop_stack(vec, vec_2d, head, head_2d);
}

int	main(void)
{
	t_stack_vec			*stack_vec;
	t_stack_vec_2d		*stack_vec_2d;
	t_stack_double_list	*stack_double_list;
	t_stack_list		*stack_list;
	void				*data;

	stack_vec = stack_create(sizeof(int));
	if (!stack_vec)
		return (1);
	stack_vec_2d = stack_double_create(3, 5);
	if (!stack_vec_2d)
		return (1);
	data = "Hello World";
	stack_double_list = stack_double_list_create(data);
	if (!stack_double_list)
		return (1);
	stack_list = stack_list_create(data);
	if (!stack_list)
		return (1);
	push_back_to_stack(stack_vec, stack_vec_2d, &stack_double_list,
		&stack_list);
	print_2d_stack(stack_vec_2d);
	print_stacks(stack_vec, &stack_list, &stack_double_list);
	free_stacks(stack_vec, stack_vec_2d, &stack_list, &stack_double_list);
	free(stack_vec);
}
