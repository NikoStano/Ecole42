/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:58:30 by niko              #+#    #+#             */
/*   Updated: 2024/10/17 01:15:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_mod(int first, int second)
{
	ft_putchar(first / 10 + 48);
	ft_putchar(first % 10 + 48);
	ft_putchar(' ');
	ft_putchar(second / 10 + 48);
	ft_putchar(second % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_mod(i, j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	ft_putchar('\n');
// 	printf("Salut je croit c'est fini ! :p\n");
// 	return (0);
// }