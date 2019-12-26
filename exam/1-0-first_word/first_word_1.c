/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 17:10:39 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/23 17:17:00 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

void    ft_putstr(char *str)
{  
    while (*str != '\0')
        ft_putchar(*str++);
}

int main(int argc, char **argv)
{
    int start;
    int len;
    int tmp;

    start = 0;
    len = 0;
    if (argc != 2 && ft_putchar('\n'))
        return (0);
    while ((argv[1][start] == '\t' || argv[1][start] == ' ') && argv[1][start])
        start++;
    tmp = start;
    while (argv[1][tmp] != '\t' && argv[1][tmp] != ' ' && argv[1][tmp] && ++tmp)
        len++;
    write(1, &(argv[1][start]), len);
    return (0);
}