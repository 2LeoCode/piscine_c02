int     ft_str_is_alpha(char *str)
{
    unsigned int i;
    unsigned char check;

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

