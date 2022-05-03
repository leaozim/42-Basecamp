/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:37:05 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 21:39:19 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	id_str;
	int	id_find;

	if (to_find[0] == '\0')
		return (str);
	id_str = 0;
	while (str[id_str] != '\0')
	{
		id_find = 0;
		while (to_find[id_find] != '\0')
		{
			if (str[id_str + id_find] == to_find[id_find])
				id_find++;
			else
				break ;
		}
		if (to_find[id_find] == '\0')
			return (id_str + str);
		id_str++;
	}
	return (0);
}
