/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:20:28 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/22 17:20:39 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	id;
	int	len;

	len = argc -1;
	while (len > 0)
	{
		id = 0;
		while (argv[len][id] != '\0')
		{
			write (1, &argv[len][id], 1);
			id++;
		}
		write (1, "\n", 1);
		len--;
	}
	return (0);
}
