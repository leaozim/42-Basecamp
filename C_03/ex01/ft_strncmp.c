/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:36:20 by lade-lim          #+#    #+#             */
/*   Updated: 2022/04/21 20:50:37 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	id;

	id = 0;
	while (id < n && (s1[id] != '\0' || s2[id] != '\0'))
	{
		if ((unsigned char)s1[id] != (unsigned char)s2[id])
			return ((unsigned char)s1[id] - (unsigned char)s2[id]);
		id++;
	}
	return (0);
}
