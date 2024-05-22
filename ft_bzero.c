/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:46:51 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/15 17:53:47 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buffer;
	while (len--)
		*(ptr++) = '\0';
}

// int	main(void)
// {
// 	char	buffer[10] = "abcdefghij";
// 
// 	printf("Value of buffer before ft_bzero: %s\n", buffer);
// 	ft_bzero(buffer + 5, 5);
// 	printf("Value of buffer after ft_bzero on 5 last bits: %s\n", buffer);
// }