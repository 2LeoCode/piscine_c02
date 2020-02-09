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

