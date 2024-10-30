/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:58:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/30 01:18:34 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//Refatorar funcao, pois ficou horrivel
static char	*ft_find_first_index_trim(char *modifiable_s1, char const *set)
{
	unsigned int	i;
	char			*similar_char;

	i = 0;
	while (modifiable_s1[i])
	{
		similar_char = ft_strrchr((char *)set, (int)(modifiable_s1[0]));
		if (similar_char == ((void *)0))
			return (modifiable_s1);
		if (similar_char[0] == modifiable_s1[0])
			modifiable_s1 = &modifiable_s1[1];
		i++;
	}
	return (modifiable_s1);
}

static char	*ft_find_last_index_trim(char *modifiable_s1, char const *set,
		unsigned int s1_size)
{
	unsigned int	i;
	char			*similar_char;

	i = 0;
	while (modifiable_s1[i])
	{
		similar_char = ft_strrchr((char *)set, (int)(modifiable_s1[s1_size
					- 1]));
		if (similar_char == ((void *)0))
			return (modifiable_s1);
		while (similar_char[0] == modifiable_s1[s1_size - 1])
		{
			modifiable_s1[s1_size - 1] = '\0';
			s1_size--;
			if (s1_size == 0)
				return (modifiable_s1);
		}
		i++;
	}
	return (modifiable_s1);
}

static char	*ft_trim_indices(char *modifiable_s1, char const *set)
{
	unsigned int	s1_size;

	modifiable_s1 = ft_find_first_index_trim(modifiable_s1, set);
	s1_size = ft_strlen(modifiable_s1);
	modifiable_s1 = ft_find_last_index_trim(modifiable_s1, set, s1_size);
	return (modifiable_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s1_size;
	char			*modifiable_s1;
	char			*pointer_malloc;
	char			*original_modifiable_s1;

	if (ft_strlen(s1) == 0)
	{
		pointer_malloc = (char *)malloc(sizeof(char) * 1);
		pointer_malloc[0] = '\0';
		return (pointer_malloc);
	}
	modifiable_s1 = ft_strdup(s1);
	original_modifiable_s1 = modifiable_s1;
	if (modifiable_s1 == ((void *)0))
		return ((void *)0);
	modifiable_s1 = ft_trim_indices(modifiable_s1, set);
	s1_size = ft_strlen(modifiable_s1);
	pointer_malloc = (char *)malloc((sizeof(char) * s1_size) + 1);
	if (pointer_malloc == ((void *)0))
		return ((void *)0);
	ft_strlcpy(pointer_malloc, modifiable_s1, s1_size + 1);
	pointer_malloc[s1_size] = '\0';
	free(original_modifiable_s1);
	return (pointer_malloc);
}
