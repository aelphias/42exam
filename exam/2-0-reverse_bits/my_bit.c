/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_bit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 12:26:37 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/25 12:42:17 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char rslt;
    unsigned char scnr;
    
    rslt = 0;
    scnr = 1;
    while (scnr)
    {
        rslt <<= 1;
        if (octet & scnr)
            rslt++;
        scnr <<= 1;        
    }
    return (rslt);    
}

int main()
{   
    char ch;

    ch = 'A';
    ft_print_char_bits(ch);
    ch = reverse_bits(ch);
    ft_print_char_bits(ch);
    return (0);
}