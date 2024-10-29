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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	
	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar("-");
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

// int main(int ac, char **av)
// {
//     if (ac > 1 && ac < 3)
//     {
//         ft_putnbr(atoi(av[1]));
//         ft_putchar('\n');
//     }
//     else
//     {
//         return (printf("1 arg !\n"));
//     }
//     return (0);
// }
