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

/* char *strrchr(const char *s, int c)
{
    int index;
    int s_size;

    index = 0;
    s_size = 0;
    while (s[index])
    {
        s_size++;
        index++;
    }
    while (s_size > 0)
    {
        if (s[s_size - 1] == c)
            return (s[s_size]);
        s_size--;
    }

} */

int main(void)
{
    char hello[] = "Hello, World!";
    char a = 'o';


    printf("%s", strrchr(hello, a));
    return (0);
}