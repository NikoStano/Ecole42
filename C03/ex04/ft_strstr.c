/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:51:46 by nistanoj          #+#    #+#             */
/*   Updated: 2024/10/05 22:45:07 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char  *ft_strstr(char *str, char *to_find)
{
  int  i;
  int  j;
  int  check;

  i = 0;
  if (to_find[0] == '\0')
    return (str);
  while (str[i])
  {
    j = 0;
    check = 1;
    while (to_find[j])
    {
      if (str[i + j] != to_find[j])
        check = 0;
    j++;
    }
    if (check == 1)
      return (&str[i]);
    i++;
    }
  return (0);
}
/*
#include <string.h>
#include <stdio.h>

int  main(void)
{
  char  str[] = " Salut ca va ce soir !";
  char  to_find[] = "a ";
  char  str1[] = " Salut ca va ce soir !";
  char  to_find1[] = "a ";
  printf("%c\n", *strstr(str1, to_find1));
  printf("%p\n", strstr(str1, to_find1));
  printf("%s\n", strstr(str1, to_find1));
  printf("%c\n", *ft_strstr(str, to_find));
  printf("%p\n", ft_strstr(str, to_find));
  printf("%s\n", ft_strstr(str, to_find));
}*/
