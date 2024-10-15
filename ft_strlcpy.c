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
	int	i;
	int	src_size;

	src_size = 1;
	i = 0;
	while (src[i])
	{
		i++;
		src_size++;
	}
	if (size == 0)
		return (src_size);
	i = 0;
	while (i < size - 1)
	{
		dst += src[src_size + i];
		src_size++;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *teste = "gustavo";
// 	char *teste1 = "serafio";

// 	printf("%d", ft_strlcpy(teste, teste1, 5));
// 	return (0);
// }