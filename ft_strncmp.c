/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:56:26 by marvin            #+#    #+#             */
/*   Updated: 2024/11/07 22:30:53 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
	return (s1_unsigned[i] - s2_unsigned[i]);
}
