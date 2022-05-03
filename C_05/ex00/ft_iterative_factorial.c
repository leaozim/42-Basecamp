/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:40:02 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/22 19:40:04 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resul;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	resul = nb;
	while (--resul > 1)
		nb = nb * resul;
	return (nb);
}
