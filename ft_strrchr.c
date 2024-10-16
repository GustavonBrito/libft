/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:23:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/16 10:23:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(char *s, int c)
{
    int index;
    int s_size;
    int last_index;

    index = 0;
    s_size = 0;
    while (s[index])
    {
        s_size++;
        index++;
    }
    last_index = s_size;
    index = 0;
    while (s_size > 0)
    {
        if (s[s_size - 1] == c)
        {
            while (s_size - 1< last_index)
            {
                s = "0";
                s[index] = s[s_size - 1];
                s_size++;
                index++;
            }
            break;
        }
        s_size--;
    }
    return (s);
}

int main(void)
{
    char hello[] = "Hello, World!";
    char a = 'o';


    ft_strrchr(hello, a);
    return (0);
}