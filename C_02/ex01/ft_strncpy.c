/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:25:38 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/21 12:17:25 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	id;

	id = 0;
	while (src[id] != '\0' && id < n)
	{
		dest[id] = src[id];
		id++;
	}
	while (id < n)
	{
		dest[id] = '\0';
		id++;
	}
	return (dest);
}
