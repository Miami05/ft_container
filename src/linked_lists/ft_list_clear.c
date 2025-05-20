/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 00:57:02 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/17 01:30:11 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	ft_double_list_clear(t_double_list **head)
{
	t_double_list		*temp;
	t_double_list		*next;

	if (!(*head) || !head)
		return ;
	temp = *head;
	while (temp)
	{
		next = temp->next;
		if (temp)
		{
			free(temp);
			temp = NULL;
		}
		temp = next;
	}
	*head = NULL;
}

void	ft_double_list_destroy(t_double_list **head)
{
	ft_double_list_clear(head);
}

void	ft_list_clear(t_list **head)
{
	t_list		*temp;
	t_list		*next;

	if (!head || !(*head))
		return ;
	temp = *head;
	while (temp)
	{
		next = temp->next;
		if (temp)
		{
			free(temp);
			temp = NULL;
		}
		free(temp);
		temp = next;
	}
	*head = NULL;
}

void	ft_list_destroy(t_list **head)
{
	ft_list_clear(head);
}
