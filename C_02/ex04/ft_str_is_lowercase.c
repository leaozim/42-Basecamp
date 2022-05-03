/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:26:51 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 14:42:01 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	alphabet;

	alphabet = 1;
	while (*str != '\0' && alphabet == 1)
	{
		if (*str >= 97 && *str <= 122)
			alphabet = 1;
		else
			alphabet = 0;
		str++;
	}
	return (alphabet);
}
