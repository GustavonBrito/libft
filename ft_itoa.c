/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:07:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/11/06 02:33:30 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	const unsigned char	*s1_unsigned;
// 	const unsigned char	*s2_unsigned;
// 	unsigned int		i;

// 	i = 0;
// 	s1_unsigned = (const unsigned char *)s1;
// 	s2_unsigned = (const unsigned char *)s2;
// 	if (n == 0)
// 		return (0);
// 	while (s1_unsigned[i] && s2_unsigned[i] && i < n - 1)
// 	{
// 		if (s1_unsigned[i] != s2_unsigned[i])
// 			return (s1_unsigned[i] - s2_unsigned[i]);
// 		i++;
// 	}
// 	return (s1_unsigned[i] - s2_unsigned[i]);
// }

// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	unsigned int	i;
// 	unsigned int	src_size;

// 	src_size = 0;
// 	i = 0;
// 	while (src[i])
// 	{
// 		i++;
// 		src_size++;
// 	}
// 	if (size == 0)
// 		return (src_size);
// 	i = 0;
// 	while (src[i] && i < size - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (src_size);
// }

char	*ft_convert_number(int n, char *buffer_converted, int digits_counted)
{
	int	temp_int;
	int	i;

	i = digits_counted;
	if (n < 0)
	{
		buffer_converted[0] = '-';
		n = -n;
	}
	if (n == 0)
		return (buffer_converted);
	temp_int = n % 10;
	ft_convert_number(n / 10, buffer_converted, i - 1);
	buffer_converted[i - 1] = temp_int + '0';
	return (buffer_converted);
}

static int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// char	*ft_validate_edge_cases(int n, char *buffer_converted)
// {
// 	if (n == -2147483648)
// 	{
// 		buffer_converted = (char *)malloc(sizeof(char) * (11 + 1));
// 		if (buffer_converted == (void *)0)
// 			return ((void *)0);
// 		ft_strlcpy(buffer_converted, "-2147483648", 12);
// 		return (buffer_converted);
// 	}
// 	if (n == 0)
// 	{
// 		buffer_converted = (char *)malloc(sizeof(char) * (1 + 1));
// 		if (buffer_converted == (void *)0)
// 			return ((void *)0);
// 		ft_strlcpy(buffer_converted, "0", 2);
// 		return (buffer_converted);
// 	}
// 	return (buffer_converted);
// }

char	*ft_itoa(int n)
{
	char	*buffer_converted;
	int		digits_counted;

	if (n == -2147483648)
	{
		buffer_converted = (char *)malloc(sizeof(char) * (11 + 1));
		if (buffer_converted == (void *)0)
			return ((void *)0);
		ft_strlcpy(buffer_converted, "-2147483648", 12);
		buffer_converted[11] = '\0';
		return (buffer_converted);
	}
	digits_counted = ft_count_digits(n);
	buffer_converted = (char *)malloc(sizeof(char) * (digits_counted + 1));
	if (buffer_converted == (void *)0)
		return ((void *)0);
	if (n == 0)
	{
		ft_strlcpy(buffer_converted, "0", 2);
		buffer_converted[1] = '\0';
		return (buffer_converted);
	}
	ft_convert_number(n, buffer_converted, digits_counted);
	buffer_converted[digits_counted] = '\0';
	return (buffer_converted);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(0));
// 	return (0);
// }

// void	test_itoa(int num, const char *expected)
// {
// 	char	*result;

// 	result = ft_itoa(num);
// 	printf("Test %d:\n", num);
// 	printf("Expected: %s\n", expected);
// 	printf("Got:      %s\n", result);
// 	printf("Result:   %s\n\n", (result && strcmp(result,
// 				expected) == 0) ? "✓" : "✗");
// 	free(result);
// }

// int	main(void)
// {
// 	char	*temp;

// 	// Edge Cases
// 	test_itoa(-2147483648, "-2147483648"); // INT_MIN
// 	test_itoa(2147483647, "2147483647");   // INT_MAX
// 	test_itoa(0, "0");                     // Zero
// 	test_itoa(-0, "0");                    // Negative zero
// 	// Single digit
// 	test_itoa(5, "5");
// 	test_itoa(-5, "-5");
// 	// Multiple digits
// 	test_itoa(42, "42");
// 	test_itoa(-42, "-42");
// 	test_itoa(1234, "1234");
// 	test_itoa(-1234, "-1234");
// 	// Numbers with zeros
// 	test_itoa(100, "100");
// 	test_itoa(-100, "-100");
// 	test_itoa(1000, "1000");
// 	test_itoa(10001, "10001");
// 	// Sequence tests
// 	test_itoa(123456789, "123456789");
// 	test_itoa(-123456789, "-123456789");
// 	// Memory test (run multiple times)
// 	for (int i = 0; i < 1000; i++)
// 	{
// 		temp = ft_itoa(i);
// 		free(temp);
// 	}
// 	return (0);
// }
