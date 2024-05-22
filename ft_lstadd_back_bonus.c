/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:20:06 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/20 18:01:32 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
// 	t_list *node;
// 
// 	node = malloc(sizeof(t_list));
// 	node->content = "Je suis le dernier\n";
// 	node->next = NULL;
// 
// 	t_list *head;
// 	head = malloc(sizeof(t_list));
// 	head->content = "Je suis la tete\n";
// 
// 	t_list *second;
// 	second = malloc(sizeof(t_list));
// 	second->content = "second\n";
// 
// 	head->next = second;
// 	second->next = node;
// 
// 	t_list 	*new;
// 	new = malloc(sizeof(t_list));
// 	new->content = "New node\n";
// 
// 	t_list *curr;
// 	curr = head;
// 
// 	while (curr)
// 	{
// 		printf("%s", (char*)curr->content);
// 		curr = curr->next;
// 	}
// 
// 	printf("----------------\n");
// 
// 	ft_lstadd_back(&head, new);
// 
// 	curr = head;
// 	while (curr)
// 	{
// 		printf("%s", (char*)curr->content);
// 		curr = curr->next;
// 	}
// }