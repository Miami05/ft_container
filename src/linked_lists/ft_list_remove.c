/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:56:16 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/16 23:57:34 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_linked_list_remove(t_double_list **head, size_t index)
{
	size_t			i;
	t_double_list	*temp;

	if (!head || !(*head))
		return ;
	i = 0;
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp == *head)
		*head = temp->next;
	free(temp);
}

void	ft_list_remove(t_list **head, size_t index)
{
	size_t		i;
	t_list		*tmp;
	t_list		*prev_node;

	if (!(*head) || !head)
		return ;
	if (index == 0)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
		return ;
	}
	i = 0;
	tmp = *head;
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp || !tmp->next)
		return ;
	prev_node = tmp->next;
	tmp->next = prev_node->next;
	free(prev_node);
}
