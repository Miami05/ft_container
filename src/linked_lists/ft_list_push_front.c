/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:15:43 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 13:23:56 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_linked_list_push_front(t_double_list **head, void *data)
{
	t_double_list		*new;

	new = malloc(sizeof(t_double_list));
	if (!new)
		return ;
	new->data = data;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
}

void	ft_list_push_front(t_list **head, void *data)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return ;
	new->data = data;
	new->next = *head;
	*head = new;
}
