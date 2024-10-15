/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:03:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 00:11:45 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int main(void)
{
	int i;

	char gustavo[] = "GUSTAVO";
	i = 0;
	while (gustavo[i]) {
		printf("%c", ft_tolower(gustavo[i]));
		i++;
	}
	return (0);
}*/