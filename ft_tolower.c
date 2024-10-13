/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:03:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 18:03:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int c)
{
    if (c < 65 && c > 90)
    {
        return c;
    }
    return (c + 32);
}

int main(void)
{
    int i;
    
    char gustavo[] = "GUSTAVO";
    i = 0;
    while (gustavo[i]) {
        printf("%c", ft_tolower(gustavo[i]));
        i++;
    }
    printf("\n");
    return 0;
}