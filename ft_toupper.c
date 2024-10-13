/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:37:11 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 17:37:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
    if (c < 97 || c > 122)
    {
        return c;
    }
    return (c - 32);
}


/*int main(void)
{
    int i;
    
    char gustavo[] = "ana paula serafio brito";
    i = 0;
    while (gustavo[i]) {
        printf("%c", ft_toupper(gustavo[i]));
        i++;
    }
    printf("\n");
    return 0;
}*/