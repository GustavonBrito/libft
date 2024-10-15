/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:20:31 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 21:14:04 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	i = 0;
	while (src[i])
	{
		i++;
		src_size++;
	}
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[src_size] = '\0';
	return (src_size);
}

int	main(void)
{
	char* src = "Hello, World!";
	char dest[20];
	size_t size = 20;

 	printf("%lld\n", ft_strlcpy(dest, src, size));
 	return (0);
}