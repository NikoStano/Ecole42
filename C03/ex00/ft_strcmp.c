/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:17:08 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/10 17:25:07 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "test1";
// 	char	s2[] = "test";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return (0);
// }