/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:56:26 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/03 15:13:17 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    str[i] = '\0';
}

// int main(int ac, char **av)
// {
//     int i = 1;
//     if (ac > 1)
//     {
//         while (i < ac)
//         {
//             ft_putstr(av[i]);
//             write(1, "\n", 1);
//             i++;
//         }
//     }
//     return (0);
// }
