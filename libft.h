/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:18:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/15 23:12:25 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_atoi(char *nptr);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
size_t	ft_strlcpy(char *dst, char *src, size_t size);