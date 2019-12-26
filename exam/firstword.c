/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelphias <aelphias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:42:10 by aelphias          #+#    #+#             */
/*   Updated: 2019/11/01 10:32:28 by aelphias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_putstr(char *s)
{
	while(*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

int	main(int argc, char **argv)
{
	int 	i;
	int		skip;
	char 	*s;
	char	*word;
	
	s = argv[1][0];
	word = NULL;
	i = 0;
	skip = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (*s != '\0')
	{
		if (*s == ' ')
			skip++;
		else
		{
			if (*s != ' ')
			*word = *s;	
		}
		s++;
	}
	ft_putstr("{ 0 }\n");
	return(0);
}
