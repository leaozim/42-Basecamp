/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:36:33 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/19 21:38:23 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (*src != '\0')
	{
		dest[size_dest] = *src;
		size_dest++;
		src++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
