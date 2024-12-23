/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:34:03 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/07 22:28:53 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_strcpy(int n, int i, unsigned char *dest_unsingned,
	const unsigned char *src_unsigned)
{
	if (dest_unsingned > src_unsigned)
	{
		while (n > i)
		{
			dest_unsingned[i + n - 1] = src_unsigned[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest_unsingned[i] = src_unsigned[i];
			i++;
		}
	}
	return ((unsigned char *)(dest_unsingned));
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_unsigned;
	unsigned char		*dest_unsigned;
	unsigned int		i;

	src_unsigned = src;
	dest_unsigned = dest;
	i = 0;
	if (dest_unsigned == 0 && src_unsigned == 0)
		return ((unsigned char *)(dest_unsigned));
	if (n == 0)
		return ((unsigned char *)(dest_unsigned));
	dest_unsigned = ft_strcpy(n, i, dest_unsigned, src_unsigned);
	return ((unsigned char *)(dest_unsigned));
}
