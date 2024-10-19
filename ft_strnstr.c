/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:07:43 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 00:12:42 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// static int	ft_strncmp(const char *s1, const char *s2, int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n == 0)
// 		return (0);
// 	while (s1[i] && s2[i] && i < n - 1)
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

// char *strnstr(const char *big, const char *little, size_t len)
// {
// 	int i;

// 	i = 0;
// 	while (little[i] && len > 0)
// 	{

// 	}
// }

// int	main(void)
// {
// 	// Test cases
// 	char *result;

// 	result = strstr("sco scorza", "scor");
// 	if (result != NULL)
// 	{
// 		printf("Test passed for haystack \"Hello, World!\" and needle \"o\"\n");
// 		printf("Result: \"%s\"\n", result);
// 	}
// 	else
// 	{
// 		printf("Test failed for haystack \"Hello,
// 			World!\" and needle \"World\"\n");
// 	}

// 	return (0);
// }