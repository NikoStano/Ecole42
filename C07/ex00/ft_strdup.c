/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:17:11 by nistanoj          #+#    #+#             */
/*   Updated: 2024/10/17 13:17:11 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    int i;
    char    *str1;
    int size;

    size = ft_strlen(str);
    str1 = malloc(sizeof(char) * size + 1);
    i = 0;
    while (i < size)
    {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    return (str1);
}
/*
intmain()
{
    char    str[] = "salut ca va ?";
    char    *str1;

    str1 = ft_strdup(str);
    printf("Adresse : %p\n", str1);
    printf("Adresse : %p\n", str);
    printf("Dupli : %s\n", str1);
    free(str1);
}*/