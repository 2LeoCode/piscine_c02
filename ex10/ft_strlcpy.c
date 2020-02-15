/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:43:47 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/14 13:08:16 by lsuardi          ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < size - 1)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	j = ft_sizeof(dest);
	dest[j] = 0;
	return (ft_sizeof(src));
}
