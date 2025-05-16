/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:52:51 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/16 18:18:51 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/linked_lists.h"

int	main(void)
{
	t_list			*head;
	long num1 = 56;
	long num2 = 98;
	long num3 = 90;
	head = NULL;
	append_node(&head,&num1);
	append_node(&head,&num2);
	append_node(&head,&num3);
	append_node(&head,&num3);
	ft_list_remove(&head, 3);
	if (!head)
		return (1);
	while (head)
	{
		printf("%ld ", *(long *)head->data);
		head = head->next;
	}
	printf("\n");
}
