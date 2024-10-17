/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:01:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 11:01:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static char * do_new_string(int s_size, int last_index, char* s,  char c){
    int index;

    index = 0;    
    while (s_size > 0)
    {
        if (s[s_size - 1] == c)
        {
            while (s_size - 1 < last_index)
            {
                s[index] = s[s_size - 1];
                s_size++;
                index++;
            }
            s[index] = '\0';
            break;
        }
        s_size--;
    }

    return (s);
}

char *ft_strrchr(char *s, int c)
{
    int index;
    int s_size;
    int last_index;

    index = 0;
    s_size = 0;
    if (c == '\0')
        return ("\0");
    while (s[index])
    {
        s_size++;
        index++;
    }
    last_index = s_size;
    index = 0;

    s = do_new_string(s_size, last_index, s, c);

    return (s);
}

int main(void)
{
    char hello[] = "Hello, World!";
    char a = '\0';


    printf("%s", ft_strrchr(hello, a));
    //printf("%s", strrchr(hello, a));
    return (0);
}