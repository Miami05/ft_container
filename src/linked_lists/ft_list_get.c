/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:20:09 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/17 01:28:00 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/linked_lists.h"

void	*ft_double_list_get(t_double_list **head, size_t index)
{
	size_t		i;

	i = 0;
	while (*head != NULL)
	{
		if (i == index)
			return ((*head)->data);
		*head = (*head)->next;
		i++;
	}
	return (NULL);
}

void	*ft_list_get(t_list **head, size_t index)
{
	size_t		i;

	i = 0;
	while (*head != NULL)
	{
		if (i == index)
			return ((*head)->data);
		*head = (*head)->next;
		i++;
	}
	return (NULL);
}

int	ft_list_size(t_list **head)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = *head;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

int	ft_double_list_size(t_double_list **head)
{
	int				len;
	t_double_list	*temp;

	len = 0;
	temp = *head;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
