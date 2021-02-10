char   strlen(char *n)
{
    int     cont;
 
    cont = 0;
    while (n[cont] != '\0')
    {
        cont++;
    }
    return (cont);
}
 
char    *ft_strlcat(char *dest, char *src, unsigned int nb)
{
    int keep_tam;
    int i;
 
	if(nb <= strlen(dest))
		return(nb + strlen(src));
    i = 0;
    keep_tam = strlen(dest);
    while (src[i] != '\0' && nb > 0)
    {
        dest[keep_tam] = src[i];
        i++;
        keep_tam++;
        nb--;
    }
    dest[keep_tam] = '\0';
    return (dest);
}
 

 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

	char stra1[1000], stra2[1000];
	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 100);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 7);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	strcpy(stra1, "0101");
	strcpy(stra2, "\n234");
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 6);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");

	return 0;
}