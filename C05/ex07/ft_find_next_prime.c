/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:12:07 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/17 17:39:29 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("Le prochain : %d\n", ft_find_next_prime(0));
// 	printf("Le prochain : %d\n", ft_find_next_prime(-1));
// 	printf("Le prochain : %d\n", ft_find_next_prime(1));
// 	printf("Le prochain : %d\n", ft_find_next_prime(2));
// 	printf("Le prochain : %d\n", ft_find_next_prime(3));
// 	printf("Le prochain : %d\n", ft_find_next_prime(2147483646));
// }