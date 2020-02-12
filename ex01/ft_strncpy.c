/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:18:10 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/12 15:19:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sizeof(char *tab)
{
	int i;

	i = -1;
	while (tab[++i])
		NULL;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = -1;
	while (++i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break ;
	}
	i--;
	while (++i <= n)
		if (ft_sizeof(src) <= n)
			dest[i] = 0;
	return (dest);
}
