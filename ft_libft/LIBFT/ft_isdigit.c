
/*
** Checks if c is an ASCII number.
*/

int ft_isdigit(int c)
{
    
    if(c >= '0' && c <= '9')
        return(1); 
    return(0);
}

