/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:17:50 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/10 17:51:27 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "test";
// 	char	s2[] = "test";
// 	printf("%d\n", ft_strncmp(s1, s2, 4));
// 	return (0);
// }