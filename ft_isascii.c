/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:27:39 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 18:27:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c)
{
    if (c > 0 && c < 127)
        return (1);
    return (0);
}

int main(void)
{
    char is_ascii[] = "e";
    int i;

    i = 0;
    printf("%d", ft_isascii(is_ascii[i]));
    return (0);
}