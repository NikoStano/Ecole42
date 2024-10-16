/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:29:47 by niko              #+#    #+#             */
/*   Updated: 2024/10/17 01:18:44 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long n;

    n = nb;
    if (n < 0)
    {
        n = -n;
        write(1, "-", 1);
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