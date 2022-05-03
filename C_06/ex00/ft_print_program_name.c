/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:15:49 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/22 17:17:04 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	id;

	id = 0;
	while (argv[0][id] != '\0' && argc)
	{
		write (1, &argv[0][id], 1);
		id++;
	}
	write (1, "\n", 1);
	return (0);
}
