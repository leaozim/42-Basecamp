/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:25:59 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 14:39:57 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alphabet;

	alphabet = 1;
	while (*str != '\0' && alphabet == 1)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
			alphabet = 1;
		else
			alphabet = alphabet - 1;
		str++;
	}
	return (alphabet);
}
