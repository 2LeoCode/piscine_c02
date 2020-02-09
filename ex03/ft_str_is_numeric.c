int     ft_str_is_numeric(char *str)
{
    unsigned int i;
    unsigned char check;

    i = 0;
    check = 0;
    while (str[i])
    {
        if(c < 48 || c > 57)
            check = 1;
        i++;
    }
    if (check == 1)
        return (0);
    else
        return (1);
}

