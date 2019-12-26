/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.2_wdmatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:37:16 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/26 18:56:34 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*

int	main(int argc, char **argv)
{
	int len;
    int i;

    i = 0;
    len = 0;
    while (argv[1][len] != '\0')
        len++;
    if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
   	}
    printf("len=%d\n", len);
    while (argv[1][i] != '\0' && argv[2][] != '\0')
    {
        
    }
    
	return (0);
}
*/

int main(int argc, char **argv)
{
    while (argc == 3 && *argv[2])
    {
        argv[1] += (*argv[2] == *argv[1]);
        if (!*argv[1])
            return (write(1, "OHA ECTb\n", 9));
        argv[2]++;    
    }
    return (write(1, "\n", 1));
}
