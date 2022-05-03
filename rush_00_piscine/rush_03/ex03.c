/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:47:21 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/10 16:49:50 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = y;
	column = x;
	while (line > 0 && column > 0)
	{
		while (column > 0)
		{
			if ((line == y || line == 1) && column == x)
				ft_putchar('A');
			else if ((line != y && line != 1) && (column != x && column != 1))
				ft_putchar(' ');
			else if ((line == 1 || line == y) && (column == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			column--;
		}
		line--;
		column = x;
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(1, 1);
	return (0);
}
