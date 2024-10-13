/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:56:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 18:56:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && i + 1 < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

/*int main(void)
{
    char char1tocompare[] = "gustavo";
    char char2tocompare[] = "gustvvoa";
    
    printf("Compare 'abc' and 'abc' (3): %d\n", ft_strncmp("abc", "abc", 3)); // Deve retornar 0
    printf("Compare 'abc' and 'abd' (3): %d\n", ft_strncmp("abc", "abd", 3)); // Deve retornar negativo
    printf("Compare 'abc' and 'abb' (3): %d\n", ft_strncmp("abc", "abb", 3)); // Deve retornar positivo
    printf("Compare 'abc' and 'abcd' (3): %d\n", ft_strncmp("abc", "abcd", 3)); // Deve retornar 0
    printf("Compare 'abc' and 'abcd' (4): %d\n", ft_strncmp("abc", "abcd", 4)); // Deve retornar negativo
    printf("Compare 'abc' and 'abc' (3): %d\n", strncmp("abc", "abc", 3)); // Deve retornar 0
    printf("Compare 'abc' and 'abd' (3): %d\n", strncmp("abc", "abd", 3)); // Deve retornar negativo
    printf("Compare 'abc' and 'abb' (3): %d\n", strncmp("abc", "abb", 3)); // Deve retornar positivo
    printf("Compare 'abc' and 'abcd' (3): %d\n", strncmp("abc", "abcd", 3)); // Deve retornar 0
    printf("Compare 'abc' and 'abcd' (4): %d\n", strncmp("abc", "abcd", 4)); // Deve retornar negativo
    return (0);
}*/