/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:43:36 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/11 11:43:17 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
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
	int i;

	i = -1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[++i])
	{
		if (!ft_is_alpha(str[i]) && !ft_is_numeric(str[i]))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		else if (str[i + 1] >= 65 && str[i + 1] <= 90)
			str[i + 1] += 32;
	}
	return (str);
}
