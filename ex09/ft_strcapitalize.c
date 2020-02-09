/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:43:36 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 16:58:41 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if (65 <= c && c <= 90 || 97 <= c && c <= 122)
		return (1);
	else
		return (0);
}

int		ft_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	while (str[i])
	{
		if (!ft_is_alpha(str[i]) && !ft_is_numeric(str[i]))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
