/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurmish < ldurmish@student.42wolfsburg.d  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:52:51 by ldurmish          #+#    #+#             */
/*   Updated: 2025/05/17 15:44:48 by ldurmish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/linked_lists.h"

void	print_single_linked_list(t_list **head)
{
	long			num;
	long			num1;
	long			num2;
	long			num3;
	t_list			*temp;

	num = 18;
	num1 = 69;
	num2 = 79;
	num3 = 100;
	append_node(head, &num);
	append_node(head, &num1);
	append_node(head, &num2);
	append_node(head, &num3);
	ft_list_push_back(head, &num3);
	ft_list_push_front(head, &num);
	temp = *head;
	printf("Single linked list: ");
	while (temp)
	{
		printf("%ld ", *(long *)temp->data);
		temp = temp->next;
	}
	temp = *head;
	ft_list_clear(&temp);
}

void	print_double_linked_list(t_double_list **head)
{
	t_double_list	*temp;
	long			num;
	long			num1;
	long			num2;
	long			num3;

	num = 181023901230000;
	num1 = 69192392198322;
	num2 = 79172378123711;
	num3 = 10017823813423;
	append_double_linked_list(head, &num);
	append_double_linked_list(head, &num1);
	append_double_linked_list(head, &num2);
	append_double_linked_list(head, &num3);
	ft_double_linked_list_push_front(head, &num);
	ft_double_linked_list_push_back(head, &num2);
	temp = *head;
	printf("Double linked list: ");
	while (temp)
	{
		printf("%ld ", *(long *)temp->data);
		temp = temp->next;
	}
	temp = *head;
	ft_double_list_destroy(&temp);
}

int	main(void)
{
	t_double_list	*head_2d;
	t_list			*head;

	head_2d = NULL;
	head = NULL;
	print_single_linked_list(&head);
	printf("\n");
	print_double_linked_list(&head_2d);
	printf("\n");
}
