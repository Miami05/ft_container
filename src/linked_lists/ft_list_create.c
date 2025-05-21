/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:55:04 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/21 14:00:49 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"
#include <stdio.h>

t_list	*ft_list_create(void *data)
{
	t_list		*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	append_node(t_list **head, void *value)
{
	t_list		*node;
	t_list		*temp;

	node = ft_list_create(value);
	if (!node)
		return ;
	if (*head == NULL)
	{
		*head = node;
		return ;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
}

t_double_list	*ft_double_list_create(void *data)
{
	t_double_list	*new;

	new = malloc(sizeof(t_double_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	append_double_linked_list(t_double_list **head, void *data)
{
	t_double_list		*next;
	t_double_list		*temp;

	next = ft_double_list_create(data);
	if (!next)
		return ;
	if (*head == NULL)
	{
		*head = next;
		return ;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = next;
	next->prev = temp;
}
