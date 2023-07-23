/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nstanoje <nstanoje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:35 by nstanoje          #+#    #+#             */
/*   Updated: 2023/07/04 15:05:13 by nstanoje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	end;

	temp = 0;
	end = 0;
	while (*tab < (size / 2))
	{
		temp = *tab;
		*tab = end;
		end = temp;
		tab++
		end--
	}
}
