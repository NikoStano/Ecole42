/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:53:48 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/17 17:38:47 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 3)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("Result : %d\n", ft_is_prime(atoi(av[1])));
}*/
