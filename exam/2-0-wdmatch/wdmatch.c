/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:37:16 by aelphias          #+#    #+#             */
/*   Updated: 2019/12/26 19:02:03 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc != 3)
		return(write(1, "\n", 1));
	while (*argv[2] != '\0')
	{
		if (argv[1][i] == *argv[2])
			i++;
		if (argv[1][i] == '\0')
			return(write(1, argv[1], i) && write(1, "\n", 1));
		argv[2]++;
	}
	return( write(1, "\n", 1));
}
