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

