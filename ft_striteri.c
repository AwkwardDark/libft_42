/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:49:22 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/22 17:28:46 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void ft_test(unsigned int n, char *c)
// {
// 	(void)n;
// 	*c = 'u';
// }
// 
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("String before applying function: %s\n", av[1]);
// 		ft_striteri(av[1], &ft_test);
// 		printf("String after applying function:%s\n", av[1]);
// 	}
// 	return (0);
// }