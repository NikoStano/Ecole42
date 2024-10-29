/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:26:22 by marvin            #+#    #+#             */
/*   Updated: 2024/10/17 13:26:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
    int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_switch(char **argv, int i, int j)
{
	char	*temp;

	if (ft_strcmp(argv[i], argv[j]) > 0)
	{
		temp = argv[i];
		argv[i] = argv[j];
		argv[j] = temp;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			ft_switch(&*argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
        ft_putchar('\n');
		i++;
	}
}