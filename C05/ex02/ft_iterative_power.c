/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:15:08 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/17 20:06:37 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = power;
	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i > 0)
	{
		n = n * nb;
		i--;
	}
	return (n);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("result : %d\n", ft_iterative_power(5, 5));
// }