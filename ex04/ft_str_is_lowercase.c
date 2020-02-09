/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:42:27 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 16:05:56 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	unsigned int	i;
	unsigned char	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			check = 1;
		i++;
	}
	if (check)
		return (0);
	else
		return (1);
}
