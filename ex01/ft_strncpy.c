/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:18:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/13 17:20:38 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_sizeof(char *tab)
{
	unsigned int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	while (++i <= n)
		if (ft_sizeof(src) <= n && dest[i])
			dest[i] = 0;
	return (dest);
}
