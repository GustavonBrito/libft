/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:56:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 00:42:12 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i +	 < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	// char char1tocompare[] = "abcdef";
	// char char2tocompare[] = "abc\375xx";

	printf("minha Compare 'abcdef' and 'abc\375xx' (3): %d\n", ft_strncmp("abcdef",
			"abc\375xx", 5));
	printf("da loja ompare 'abcdef' and 'abc\375xx' (3): %d\n",strncmp("abcdef",
			"abc\375xx", 5));
	// Deve retornar negativo
	return (0);
}