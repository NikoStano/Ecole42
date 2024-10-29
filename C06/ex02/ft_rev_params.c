/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:50:17 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/14 13:29:50 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	argc = (argc - 1);
// 	while (argc[argv])
// 	{
// 		if (argc == 0)
// 			return (0);
// 		ft_putstr(argv[argc]);
// 		ft_putstr("\n");
// 	argc--;
// 	}
// }

int	main(int argc, char *argv[])
{
	int i;
	int	j;

	i = (argc - 1);
	while (i < argc)
	{
		if (i == 0)
			return (0);
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
}