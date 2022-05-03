/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:13:28 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/16 15:13:30 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	id;
	int	count;

	id = 0;
	count = 1;
	while (id < size / 2)
	{
		temp = tab[id];
		tab[id] = tab[size - count];
		tab[size - count] = temp;
		id++;
		count++;
	}
}
