/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 17:04:18 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/25 13:24:30 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_print_char_bits(unsigned char ch)
{
    int     size;
    unsigned char    bit;

    size = ((sizeof(unsigned char) * __CHAR_BIT__) - 1);
    while (size >= 0)
    {
        bit = (ch & (1 << size)) == 0 ? '0' : '1';
        write(1, &bit, 1);
        if ((size % 8 ) == 0)
           write(1, "  ", 1);
        size--;
    }
    write(1, "\n", 1);
}  

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
    write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result;
    unsigned char scaner = 1;

    result = 0;
    while (scaner)
    {
        result <<= 1;
        if (octet & scaner)
            result++;
        scaner <<= 1;
    }
    return (result); 
}


int main()
{   
    char ch;

    ch = 'A';    
    print_bits2(ch);
    ch = reverse_bits(ch);
    print_bits2(ch);
    return (0);
}