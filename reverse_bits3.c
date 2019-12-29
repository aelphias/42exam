/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 12:26:37 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/29 18:23:55 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_print_char_bits(unsigned char ch)
{
    int             size;
    unsigned char   bit;

    size = ((sizeof(unsigned char) * __CHAR_BIT__) - 1);
    while (size >= 0)
    {
        bit = (ch & (1 << size)) == 0 ? '0' : '1';
        write(1, &bit, 1);
        if ((size % 4 ) == 0)
           write(1, "  ", 1);
        size--;
    }
    write(1, "\n", 1);
}  

char    reverse_bits(char c)
{
    int     i;
    char    res;

    i = -1;
    res = 0;
    while (++i <= 7)
        res += (c >> i & 1) << (7 - i);
    return (res);
}

int main()
{   
    unsigned char ch;

    ch = 131;
    ft_print_char_bits(ch);
    ch = reverse_bits(ch);
    ft_print_char_bits(ch);
    return (0);
}
