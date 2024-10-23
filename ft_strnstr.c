/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:07:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 20:10:06 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp_modified(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*s1_unsigned;
	const unsigned char	*s2_unsigned;
	unsigned int		i;

	i = 0;
	s1_unsigned = (const unsigned char *)s1;
	s2_unsigned = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1_unsigned[i] && s2_unsigned[i] && i < n - 1)
	{
		if (s1_unsigned[i] != s2_unsigned[i])
			return (s1_unsigned[i] - s2_unsigned[i]);
		i++;
	}
	if (s2_unsigned[i] == '\0' || s1_unsigned[i] == '\0')
		i -= 1;
	return (s1_unsigned[i] - s2_unsigned[i]);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	s_length;

// 	s_length = 0;
// 	while (*s)
// 	{
// 		s_length++;
// 		s++;
// 	}
// 	return (s_length);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	little_size;

	i = 0;
	little_size = 0;
	if (big[i] == '\0')
		return ((char *)big);
	if (little[i] == '\0')
		return ((char *)big);
	if (len <= 0)
		return (0);
	little_size = ft_strlen(little);
	while (i + little_size <= len)
	{
		if (ft_strncmp_modified(big, little, little_size) == 0)
			return (((char *)big));
		else
		{
			big = &big[1];
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
//     const char *big;
//     const char *little;
//     const char *result;
//     //Test case 1
//     big = "aaxx";
//     little = "xx";
//     result = ft_strnstr(big, little, 4);
//     printf("Result 1: %s\n", result); // Expected: "World!"
// 	return (0);
// }
// }
// }
// }
//if little occurs nowhere in big, NULL is returned
// // int(const char *, const char *, size_t)
// // int(const char *, const char *, long unsigned int)
