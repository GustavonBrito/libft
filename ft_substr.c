/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:58:38 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/27 15:38:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer_malloc;
	unsigned int	i;
	size_t			string_size;

	string_size = ft_strlen(s);
	i = 0;
	if (start > string_size)
	{
		pointer_malloc = (char *)malloc(1 * sizeof(char));
		pointer_malloc[0] = '\0';
		return (pointer_malloc);
	}
	if (start + len > string_size)
		len = string_size - start;
	pointer_malloc = (char *)malloc((len + 1) * sizeof(char));
	if (pointer_malloc == ((void *)0))
		return (((void *)0));
	while (i < len)
	{
		pointer_malloc[i] = s[start];
		start++;
		i++;
	}
	pointer_malloc[len] = '\0';
	return ((char *)(pointer_malloc));
}

// int	main(void)
// {
// 	char *s = "tripouille";

// 	printf("%s", ft_substr(s, 100, 1));
// 	return (0);
// }