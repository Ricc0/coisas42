int ft_tolower(int c)
{
    if(c >= 'A' && c<= 'Z')
    {
        return (c + ('a' - 'A')); // or +32
    }
    else 
        return (c);
}


