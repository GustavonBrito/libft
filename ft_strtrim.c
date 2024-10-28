/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:58:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/28 02:47:25 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

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

// 	s_length = 0;
// int	ft_strncmp_modified(const char *s1, const char *s2, size_t n)
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
// 	if (s2_unsigned[i] == '\0' || s1_unsigned[i] == '\0')
// 		i -= 1;
// 	return (s1_unsigned[i] - s2_unsigned[i]);
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	unsigned int	i;
// 	unsigned int	little_size;

// 	i = 0;
// 	little_size = 0;
// 	if (big[i] == '\0' && little[i] == '\0')
// 		return ((char *)big);
// 	if (big[i] == '\0')
// 		return (0);
// 	if (little[i] == '\0')
// 		return ((char *)big);
// 	if (len <= 0)
// 		return (0);
// 	little_size = ft_strlen(little);
// 	while (i + little_size <= len)
// 	{
// 		if (ft_strncmp_modified(big, little, little_size) == 0)
// 			return (((char *)big));
// 		else
// 		{
// 			big = &big[1];
// 		}
// 		i++;
// 	}
// 	return (0);
// }
int     ft_strncmp(const char *s1, const char *s2, size_t n)
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

// char	*ft_strcat(char *dest, const char *src)
// {
// 	int	i;
// 	int	dest_len;

// 	i = 0;
// 	dest_len = 0;
// 	while (dest[dest_len])
// 	{
// 		dest_len++;
// 	}
// 	while (src[i])
// 	{
// 		dest[dest_len + i] = src[i];
// 		i++;
// 	}
// 	return (dest);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int s1_size;
    unsigned int set_size;
    unsigned int elements_to_trim;
    unsigned int i;
    
    if (s1 == (void *)0 || set == (void *)0)
		return ((void *)0);
    s1_size = ft_strlen(s1);
    set_size = ft_strlen(set);
    i = 0;
    while (i < set_size)
    {
        if (ft_strncmp(s1, set, set_size) != 0)
        {
            
        }
        if (ft_strncmp(&s1[s1_size], set, set_size) != 0)
        {
            
        }
        i++;
    }
    
	//return (pointer_malloc);
}

int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "lorem ipsum dolor sit amet";
	set = "te";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}

// start vai iterando ate enquanto for dando diferente;
// final vai ser start + set_len;