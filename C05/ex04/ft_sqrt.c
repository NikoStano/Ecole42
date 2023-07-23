/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:46:32 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/17 17:46:23 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	if (nb == 0 || nb < 0)
		return (0);
	while (i * i < nb + 1)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", ft_sqrt(81));
// 	printf("%d\n", ft_sqrt(25));
// }