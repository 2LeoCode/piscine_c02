/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:43:47 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/19 11:33:35 by lsuardi          ###   ########.fr       */
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
		i++;
	}
	dest[i] = 0;
	eturn (ft_sizeof(src));
}
