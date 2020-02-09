/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:22:32 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 16:04:29 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	unsigned int	i;
	unsigned char	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (c < 48 || c > 57)
			check = 1;
		i++;
	}
	if (check == 1)
		return (0);
	else
		return (1);
}
