/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:51:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/22 19:56:36 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s)
{
	int		index;
	char	*string_dup;
	int		s_size;

	index = 0;
	s_size = 0;
	while (s[index])
	{
		index++;
		s_size++;
	}
	string_dup = (char *)malloc(s_size + 1 * sizeof(char));
	index = 0;
	while (s[index])
	{
		string_dup[index] = s[index];
		index++;
	}
	string_dup[index + 1] = '\0';
	return (string_dup);
}

// int	main(void)
// {
// 	char *s = "gustavo";
// 	free(strdup(s));
// 	printf("%s\n", strdup(s));
// 	return (0);
// }