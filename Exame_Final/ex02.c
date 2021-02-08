#include <unistd.h>

int tamanho(char *str)
{
    int i;
    while(str[i] != '\0')    
    {
        i++;
    }
    return i;
}

void print_revar(char *str)
 {   
    
    int inicio;
    int fim;
    
    
    inicio =0;
    fim =0;
    
    fim = tamanho(str);
    
    while(fim -1 >= inicio)
    {
        write(1,&str[fim -1],1);
        fim--;
    }
    
 }

//void print_rev(char *str);
int main(void)
{
   char string[] = "This is a sentence";
	print_revar(string);
    return (0);
}
