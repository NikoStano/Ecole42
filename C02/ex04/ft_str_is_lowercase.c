/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:56:02 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/06 13:14:49 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("1"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// 	printf("%d\n", ft_str_is_lowercase(" "));
// 	printf("%d\n", ft_str_is_lowercase("A"));
// 	printf("%d\n", ft_str_is_lowercase("b"));
// 	return (0);
// }