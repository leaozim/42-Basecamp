/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:27:18 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 14:46:29 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	alphabet;

	alphabet = 1;
	while (*str != '\0' && alphabet == 1)
	{
		if (*str >= 65 && *str <= 90)
			alphabet = 1;
		else
			alphabet = 0;
		str++;
	}
	return (alphabet);
}
