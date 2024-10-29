/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:14:29 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/03 11:36:20 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
// void    ft_putint(int nb)
// {
//     if (nb < 0)
//     {
//         nb = -nb;
//         ft_putchar('-');
//     }
//     if (nb / 10)
//         ft_putint(nb / 10);
//     ft_putchar(nb % 10 + 48);
// }
// int main(void)
// {
//     int div;
//     int mod;
//     int a = 21;
//     int b = 2;
//     ft_div_mod(a, b, &div, &mod);
//     ft_putint(div);
//     ft_putchar('\n');
//     ft_putint(mod);
//     ft_putchar('\n');
// }
