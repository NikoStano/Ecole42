/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:36:34 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/03 11:08:41 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
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
//     int a = 42;
//     int b = 24;
//     ft_putint(a);
//     ft_putchar('\n');
//     ft_putint(b);
//     ft_putchar('\n');
//     ft_swap(&a, &b);
//     ft_putint(a);
//     ft_putchar('\n');
//     ft_putint(b);
//     ft_putchar('\n');
// }
