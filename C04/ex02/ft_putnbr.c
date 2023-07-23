/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:12:39 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/11 13:47:11 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n / 10)
		ft_putnbr(n / 10);
	i = n % 10 + 48;
	write(1, &i, 1);
}

// int	main(void)
// {
// 	ft_putnbr(12);
// 	return (0);
// }
