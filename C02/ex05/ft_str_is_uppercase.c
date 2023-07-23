/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:56:12 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/06 13:38:53 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("1"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// 	printf("%d\n", ft_str_is_uppercase(" "));
// 	printf("%d\n", ft_str_is_uppercase("A"));
// 	printf("%d\n", ft_str_is_uppercase("b"));
// 	return (0);
// }