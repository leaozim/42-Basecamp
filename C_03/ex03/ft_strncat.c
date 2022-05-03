/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:36:48 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 21:39:08 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	size_dest;

	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	id = 0;
	while (src[id] != '\0' && id < nb)
	{
		dest[size_dest++] = src[id];
		id++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
