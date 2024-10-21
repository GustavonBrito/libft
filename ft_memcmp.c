/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:37:14 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/20 13:33:04 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_converted;
	const unsigned char	*s2_converted;
	unsigned int		i;

	i = 0;
	s1_converted = (const unsigned char *)s1;
	s2_converted = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_converted[i] != s2_converted[i])
			return ((const unsigned int)(s1_converted[i] - s2_converted[i]));
		i++;
	}
	return (0);
}

// int main(void)
// {
// // Test 2:
//     printf("%d \n", ft_memcmp("t\200", "t\0", 2));
// 	printf("%d", memcmp("t\200", "t\0", 2));
// // Expected (cat -e test02.output):
// // 1
// // Your result (cat -e user_output_test02):
// // -1
// // Test 3:
// //     ft_print_result(ft_memcmp("testss", "test", 5));
// // Expected (cat -e test03.output):
// // 1
// // Your result (cat -e user_output_test03):
// // -1
// // Test 4:
// //     ft_print_result(ft_memcmp("test", "tEst", 4));
// // Expected (cat -e test04.output):
// // 1
// // Your result (cat -e user_output_test04):
// // -1
// // Test 6:
// //     ft_print_result(ft_memcmp("test", "", 4));
// // Expected (cat -e test06.output):
// // 1
// // Your result (cat -e user_output_test06):
// // -1
// 	return (0);
// }