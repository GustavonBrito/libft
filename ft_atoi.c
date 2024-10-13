/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:54:51 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 16:54:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *nptr)
{
    int index;
    int sign;
    int result;

    index = 0;
    sign = 1;
    result = 0;
    if (nptr[index] == '+')
    {
        index++;
    }else if(nptr[index] == '-')
    {
        sign = -1 * sign;
        index++;
    }
    while(nptr[index])
    {
        result = 10 * result + (nptr[index] - '0');
        index++;
    }

    return (result * sign);
}

/*int main(void)
{
    char* int_to_convert = "-218712993";

    printf("%d", ft_atoi(int_to_convert));
    return (0);
}*/