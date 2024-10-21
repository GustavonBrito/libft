/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:56:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 20:49:03 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	// printf("minha Compare 'abcdef' and 'abc\375xx' (3): %d\n",
// 	// 	ft_strncmp("abcdef", "abc\375xx", 5));
// 	printf("da loja ompare 'abcdef' and 'abc\375xx' (3): %d\n",
// 		strncmp("abcdef", "abc\375xx", 5));
// 	return (0);
// }