/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:28:28 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/16 18:35:35 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	id;

	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 65 && str[id] <= 90)
			str[id] = str[id] + 32;
		id++;
	}
	return (str);
}
