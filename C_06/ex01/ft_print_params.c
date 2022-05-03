/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:18:14 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/22 17:18:56 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	id;
	int	cont;

	cont = 1;
	while (cont < argc)
	{
		id = 0;
		while (argv[cont][id] != '\0')
		{
			write (1, &argv[cont][id], 1);
			id++;
		}
		cont++;
		write (1, "\n", 1);
	}
	return (0);
}
