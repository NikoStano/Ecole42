/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:00:17 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/10 20:12:14 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
// void    ft_putnbr(int nbr)
// {
//     if (nbr / 10)
//         ft_putnbr(nbr / 10);
//     ft_putchar(nbr % 10 + 48);
    
// }
// int	main(int ac, char **av)
// {
//     int	i = 1;
//     if (ac > 1)
//     {
//         while (i < ac)
//         {
//             ft_putnbr(ft_strlen(av[i]));
//             ft_putchar('\n');
//             i++;
//         }
//     }
//     return (0);
// }
