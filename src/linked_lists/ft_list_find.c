/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 00:14:47 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/17 00:37:00 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

bool	cmp(void *a, void *b)
{
	if (a == b)
		return (true);
	return (false);
}

void	*ft_list_find(t_list **head, bool (*cmp)(void *a, void *b),
	void *target)
{
	t_list		*temp;

	temp = *head;
	while (temp)
	{
		if (cmp(temp->data, target))
			return (target);
		temp = temp->next;
	}
	return (NULL);
}

void	*ft_double_list_find(t_double_list **head,
	bool (*cmp)(void *a, void *b), void *target)
{
	t_double_list		*temp;

	temp = *head;
	while (temp)
	{
		if (cmp(temp->data, target))
			return (temp->data);
		temp = temp->next;
	}
	return (NULL);
}
