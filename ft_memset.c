/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:31:36 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/15 17:54:31 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer, int value, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buffer;
	while (len--)
		*(ptr++) = (unsigned char)value;
	return (buffer);
}

// int	main(void)
// {
// 	char	buffer[10];
// 
// 	ft_memset(buffer, 'a', 5);
// 	ft_memset(buffer + 5, 'b', 5);
// 	printf("%s\n", buffer);
// }