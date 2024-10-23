/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:11:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 19:56:41 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	s_length;

	s_length = 0;
	while (*s)
	{
		s_length++;
		s++;
	}
	return (s_length);
}

// int	main(void)
// {
// 	char gustavo[] = "gustavo";

// 	printf("%ld", ft_strlen(gustavo));
// 	return (0);
// }