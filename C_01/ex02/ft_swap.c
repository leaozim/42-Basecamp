/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:32:36 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/21 13:59:37 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;  
	*b = c;
}

#include <stdio.h>
int		main(void)
{
	int a;
	int b;

	a = 1; azul
	b = 2; amarelo
	printf("before: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("before: %d %d\n", a, b);
}