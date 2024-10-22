/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:44:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/22 00:58:14 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pointer_malloc;

	pointer_malloc = ((unsigned char *)(malloc(nmemb * size)));
	pointer_malloc = ft_memset(pointer_malloc, 0, nmemb * size);
	return (pointer_malloc);
}

// int	main(void)
// {
// 	int *p;

// 	p = calloc(2, sizeof(int));
// 	*p = 5000;
// 	return (0);
// }