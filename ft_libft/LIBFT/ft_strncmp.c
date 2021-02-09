

/*
** compara as  strings s1 and s2 char-wise, returning the difference.
*/


int ft_strncmp(char *s1, char *s2, int n)
{
    int i;
 
    i = 0;
    while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
    {
        if(i < (n-1))
        {
            i++;
        }
        else 
            return(0);
    }
            return (s1[i] - s2[i]);
}
