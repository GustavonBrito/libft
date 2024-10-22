/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:07:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/21 23:17:53 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i + 1] != '\0' && s1[i + 1] != '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && little[i] && i < len - 1)
	{
		if (ft_strncmp(big, little, len) == 0)
		{
			flag = 1;
			break ;
		}
		else
		{
			flag = 0;
			big = &big[1];
			i = 0;
		}
		i++;
	}
	if (flag == 1)
		return ((char *)big);
	return (0);
}

// //if little occurs nowhere in big, NULL is returned
// int	main(void)
// {
//     const char *big;
//     const char *little;
//     const char *result;

//     //Test case 1
//     big = "Hello, World!";
//     little = "World";
//     result = ft_strnstr(big, little, 13);
//     printf("Result 1: %s\n", result); // Expected: "World!"

//     // Test case 2
//     big = "Hello, World!";
//     little = "world";
//     result = ft_strnstr(big, little, 13);
//     printf("Result 2: %s\n", result); // Expected: (null)

//     //Test case 3
//     big = "Hello, World!";
//     little = "";
//     result = ft_strnstr(big, little, 13);
//     printf("Result 3: %s\n", result); // Expected: "Hello, World!"

//     //Test case 4
//     big = "Hello, World!";
//     little = "Hello";
//     result = ft_strnstr(big, little, 5);
//     printf("Result 4: %s\n", result); // Expected: "Hello, World!"

//     //Test case 5
//     big = "Hello, World!";
//     little = "Hello";
//     result = ft_strnstr(big, little, 4);
//     printf("Result 5: %s\n", result); // Expected: (null)

// 	return (0);
// }

// // int(const char *, const char *, size_t)
// // int(const char *, const char *, long unsigned int)