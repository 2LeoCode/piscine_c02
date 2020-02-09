int		ft_sizeof(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_sizeof(src));
}

