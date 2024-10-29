/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:58:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/29 02:25:03 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (c > 255)
		c = c % 256;
	while (s[i])
	{
		if (ft_isascii(s[i]) == 0)
			return (0);
		if (s[i] == c)
		{
			s = &s[i];
			i = 0;
			flag = 1;
		}
		i++;
	}
	if (flag == 1)
		return (s);
	if (c == 0)
		return (s = &s[i]);
	return (0);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	i = 0;
	while (src[i])
	{
		i++;
		src_size++;
	}
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

char	*ft_strdup(const char *s)
{
	int		index;
	char	*string_dup;
	int		s_size;

	index = 0;
	s_size = 0;
	while (s[index])
	{
		index++;
		s_size++;
	}
	string_dup = (char *)malloc(s_size + 1 * sizeof(char));
	index = 0;
	while (s[index])
	{
		string_dup[index] = s[index];
		index++;
	}
	string_dup[index + 1] = '\0';
	return (string_dup);
}

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

static char	*ft_find_first_index_trim(char *modifiable_s1, char const *set)
{
	unsigned int	i;
	char			*similar_char;

	i = 0;
	while (set[i] || ((set[0]) != (modifiable_s1[0])))
	{
		similar_char = ft_strrchr((char *)set, (int)(modifiable_s1[0]));
		if (similar_char == ((void *)0))
			break ;
		while (similar_char[0] == modifiable_s1[0])
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
	while (set[i] && ((set[0]) != (modifiable_s1[0])))
	{
		similar_char = ft_strrchr((char *)set, (int)(modifiable_s1[s1_size
					- 1]));
		if (similar_char == ((void *)0))
			break ;
		while (similar_char[0] == modifiable_s1[s1_size - 1])
		{
			modifiable_s1[s1_size - 1] = '\0';
			s1_size--;
			if (s1_size == 0)
				break ;
		}
		i++;
	}
	return (modifiable_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s1_size;
	char			*modifiable_s1;
	char			*pointer_malloc;

	if (s1 == (void *)0 || set == (void *)0)
		return ((void *)0);
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return ((char *)s1);
	modifiable_s1 = ft_strdup(s1);
	modifiable_s1 = ft_find_first_index_trim(modifiable_s1, set);
	s1_size = ft_strlen(modifiable_s1);
	modifiable_s1 = ft_find_last_index_trim(modifiable_s1, set, s1_size);
	pointer_malloc = (char *)malloc(sizeof(char) * s1_size + 1);
	if (pointer_malloc == ((void *)0))
		return ((void *)0);
	ft_strlcpy(pointer_malloc, modifiable_s1, s1_size + 1);
	pointer_malloc[s1_size] = '\0';
	return (pointer_malloc);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "   \t  \n\n \t\t  \n\n nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	set = " \n\t";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}

// start vai iterando ate enquanto for dando diferente;
// final vai ser start + set_len;