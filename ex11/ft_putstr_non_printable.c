/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:28:42 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/08 11:28:45 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_printable(char c)
{
	if (c > 32)
		return (1);
	else
		return (0);
}

void	ft_print_hexa(char c)
{
	char hexa[2];

	if (c > 15)
		hexa[0] = 49;
	else
		hexa[0] = 48;
	if (c == 32)
		hexa[0] = 50;
	hexa[1] = c % 16;
	if (hexa[1])
		if (hexa[1] < 10)
			hexa[1] += 48;
		else
			hexa[1] += 55;
	else
		hexa[1] = 48;
	write(1, "\\", 1);
	write(1, hexa, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			ft_print_hexa(str[i]);
		i++;
	}
}
