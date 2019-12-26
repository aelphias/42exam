#include <stdio.h>


unsigned char	reverse_bits(unsigned char octet)
{
    int b1;
    int b2;
    int b3;
    int b4;
    int b5;
    int b6;
    int b7;
    int b8;
    unsigned char oct;

    b1 = 0;
    b2 = 0;
    b3 = 0;
    b4 = 0;
    b5 = 0;
    b6 = 0;
    b7 = 0;
    b8 = 0;
    oct = octet;

    b1 = oct >> 0 & 1;
    b2 = oct >> 1 & 1;
    b3 = oct >> 2 & 1;
    b4 = oct >> 3 & 1;
    b5 = oct >> 4 & 1;
    b6 = oct >> 5 & 1;
    b7 = oct >> 6 & 1;
    b8 = oct >> 7 & 1;

    return (
    b1 << 7 |
    b2 << 6 |
    b3 << 5 |
    b4 << 4 |
    b5 << 3 |
    b6 << 2 |
    b7 << 1 |
    b8 );
}


int main()
{   
    unsigned char ch;

    ch = 12;
//    ft_print_char_bits(ch);
    ch = reverse_bits(ch);
    printf("%hhu", ch);
//    ft_print_char_bits(ch);
    return (0);
}