/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 13:34:03 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/20 23:52:17 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
	unsigned char		*dest_unsingned;
	unsigned int		i;

	src_unsigned = src;
	dest_unsingned = dest;
	i = 0;
	if (n == 0)
		return ((unsigned char *)(src_unsigned));
	dest_unsingned = ft_strcpy(i, n, dest_unsingned, src_unsigned);
	return ((unsigned char *)(dest_unsingned));
}

int	main(void)
{
	char data[] = "Hello, world!";

	// Vamos copiar os primeiros 5 caracteres
	//("Hello") para a posição que começa no índice 7
	// Isso resultará em sobreposição,
	// pois a área de destino se sobrepõe à área de origem.
	ft_memmove(data + 7, data, 5);

	printf("Resultado: %s\n", data);
	return (0);
}