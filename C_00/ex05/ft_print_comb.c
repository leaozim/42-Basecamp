/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:39:38 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/13 19:25:07 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	numbers[3];

	a = '0' -1;
	while (a++ < '9')
	{
		b = a;
		while (b++ < '9')
		{
			c = b;
			while (c++ < '9')
			{
				numbers[0] = a;
				numbers[1] = b;
				numbers[2] = c;
				write (1, &numbers, 3);
				if (a < '7')
					write(1, ", ", 2);
			}
		}
	}
}
