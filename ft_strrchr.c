/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:01:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 02:05:24 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	last_index;

	i = 0;
	last_index = 0;
	while (s[i])
	{
		if (ft_isascii(s[i]) == 0)
			return (0);
		if (s[i] == c)
		{
			s = &s[i];
			i = 0;
		}
		i++;
		last_index++;
	}
	if (c == 0)
		return (s = &s[i]);
	if (s[0] == 0)
		return (0);
	if (i == last_index && s[0] != c)
		return (0);
	return (s);
}

// int	main(void)
// {
// 	char *hello = "tests";
// 	int a = 1024 + 'e';

// 	//printf("%s", ft_strrchr(hello, a));
// 	printf("%s", strrchr(hello, a));
// 	return (0);
// }