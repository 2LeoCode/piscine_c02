/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:42:45 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 11:42:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_uppercase(char *str)
{
    unsigned int i;
    unsigned char check;

    i = 0;
    check = 0;
    while (str[i])
    {
        if (str[i] < 65 || str[i] > 90)
            check = 1;
        i++;
    }
    if (check)
        return (0);
    else
        return (1);
}

