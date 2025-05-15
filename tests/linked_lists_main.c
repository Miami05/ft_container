/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:52:51 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/15 14:35:46 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/linked_lists.h"

int	main(void)
{
	t_list	*head;
	char	str[]="hello";
	char	str1[] = "world";
	char	str2[] = "I am ledio";
	head = NULL;
	append_node(&head, str);
	append_node(&head, str);
	append_node(&head, str);
	ft_list_push_front(&head, str1);
	ft_list_push_front(&head, str1);
	ft_list_push_back(&head, str1);
	ft_list_push_back(&head, str2);
	ft_list_pop_back(&head);
	ft_list_pop_front(&head);
	while (head)
	{
		printf("%s ", (char *)head->data);
		head = head->next;
	}
	printf("\n");
}
