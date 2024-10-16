/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:38:37 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/03 19:15:57 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
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
//     int a = 21;
//     int b = 2;
//     ft_ultimate_div_mod(&a, &b);
//     ft_putint(a);
//     ft_putchar('\n');
//     ft_putint(b);
//     ft_putchar('\n');
// }
