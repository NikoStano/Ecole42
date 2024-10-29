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
#include <stdio.h>
#include <stdlib.h>

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

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("Next prime : %d\n", ft_find_next_prime(atoi(av[1])));
}*/
