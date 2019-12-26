#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{  
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
    
}

int main(int argc, char **argv)
{
    int start;
    int len;    
    int k;

    start = 0;
    len = 0;
    k = 0;
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    while (argv[1][start] == '\t' || argv[1][start] == ' ')
        start++;
    k = start;
    while ((argv[1][k] != '\t' && argv[1][k] != ' ' ) && argv[1][k] != '\0' )
    {
        len++;
        k++;
    }
    write(1, &(argv[1][start]), len);
    write(1, "\n", 1);
    return (0);
}