/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:28:42 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/11 17:54:52 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

void	ft_print_hexa(char *hex)
{
	write(1, "\\", 1);
	write(1, hex, 2);
}

void	ft_calc_hexa(char c)
{
	char hexa[2];

	if (c == 127)
	{
		hexa[0] = '7';
		hexa[1] = 'F';
	}
	else
	{
		if (c > 15)
			hexa[0] = 49;
		else
			hexa[0] = 48;
		hexa[1] = c % 16;
		if (hexa[1])
			if (hexa[1] < 10)
				hexa[1] += 48;
			else
				hexa[1] += 55;
		else
			hexa[1] = 48;
	}
	ft_print_hexa(hexa);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (ft_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			ft_calc_hexa(str[i]);
	}
}
