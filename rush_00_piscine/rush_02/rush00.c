/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:41:36 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/09 17:30:09 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = y;
	column = x;
	while (line > 0)
	{
		while (column > 0)
		{
			if ((line == x) && (column == 1 || column == y))
				ft_putchar('A');
			else if ((line != x && line != 1) && (column != y && column != 1))
				ft_putchar(' ');
			else if ((line == 1) && (column == 1 || column == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			column--;
		}	
		line--;
		column = y;
		ft_putchar('\n');
	}
}
