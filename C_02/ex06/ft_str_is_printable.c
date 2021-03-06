/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:27:50 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/21 16:32:09 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	id;

	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] < 32 || str[id] == 127)
			return (0);
		id++;
	}
	return (1);
}
