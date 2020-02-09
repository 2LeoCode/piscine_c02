/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 10:22:14 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 10:22:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int	i;
	unsigned char	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			check = 1;
		i++;
	}
	if (check)
		return (0);
	else
		return (1);
}
