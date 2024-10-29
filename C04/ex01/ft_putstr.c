/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:01:54 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/10 20:20:07 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(int ac, char **av)
// {
//     int	i = 1;
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
