/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pajimene <pajimene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:15:32 by pajimene          #+#    #+#             */
/*   Updated: 2024/05/20 17:36:03 by pajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	destcpy = (unsigned char *)dest;
	srccpy = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (srccpy < destcpy)
	{
		while (i < len)
		{
			destcpy[len - 1 - i] = srccpy[len -1 - i];
			i++;
		}
	}
	while (i < len)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	buffer[10];
// 
// 	printf("Source pointer: %s\n", "bonjour :D");
// 	ft_memmove(buffer, "bonjour :D", 10);
// 	printf("Destination pointer: %s\n", buffer);
// }