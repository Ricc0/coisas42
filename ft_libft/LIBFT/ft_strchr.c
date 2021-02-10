char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
    {
		return ((char * )str);
    }
	return (0);
}

