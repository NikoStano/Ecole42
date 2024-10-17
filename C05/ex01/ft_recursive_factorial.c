/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:48:55 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/17 17:45:46 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial (nb - 1));
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("Result : %d\n", ft_recursive_factorial(atoi(av[1])));
	return (0);
}*/
