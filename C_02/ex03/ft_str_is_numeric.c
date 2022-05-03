/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:26:26 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 14:40:24 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	numeric;

	numeric = 1;
	while (*str != '\0' && numeric == 1)
	{
		if (*str >= 48 && *str <= 57)
			numeric = 1;
		else
			numeric = numeric - 1;
		str++;
	}
	return (numeric);
}
