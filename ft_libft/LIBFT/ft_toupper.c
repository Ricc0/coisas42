int ft_toupper(int c)
{
    if(c>='a' && c<='z')
    {
        return(c - ('a' - 'A')); //or -32
    }
    else 
    	return(c);
}
