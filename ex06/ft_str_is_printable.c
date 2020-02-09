/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:42:58 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/09 11:43:01 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_printable(char *str)
{
    unsigned int i;
    unsigned char check;

    i = 0;
    check = 0;
    while (str[i])
    {
        if (str[i] < 32)
            check = 1;
        i++;
    }
    if (check)
        return (0);
    else
        return (1);
}

