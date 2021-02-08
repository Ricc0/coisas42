#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void basecamp(void)
{
    int coluna1ao10;
    int coluna1;

    coluna1ao10 = 48;
    while(coluna1ao10 <= '9')
    {
        if(coluna1ao10 == 51 && coluna1ao10  == 53)
        {
            write(1, "trescinco",9);
            write(1,"\n",1);       
            coluna1ao10++;

        }
        if(coluna1ao10  == 51)
        {

            write(1,"tres",4);
            write(1,"\n",1);       
            coluna1ao10++;

        }
        if(coluna1ao10  == 53)
        {
            write(1,"cinco",5);
            write(1,"\n",1);       
            coluna1ao10++;

        }



        ft_putchar(coluna1ao10);
        write(1,"\n",1);       
        coluna1ao10++;
    }
    coluna1 = 10;
    while( coluna1 <= 100 )
    {   
        if(coluna1%3 == 0 && coluna1%5 == 0)
        {
            write(1, "trescinco",9);
            write(1,"\n",1);       
            coluna1++;

        }
        if(coluna1 % 3 == 0)
        {

            write(1,"tres",4);
            write(1,"\n",1);       
            coluna1++;

        }
        if(coluna1 % 5  == 0)
        {
            write(1,"cinco",5);
            write(1,"\n",1);       
            coluna1++;

        }

        ft_putchar(coluna1 / 10 + '0');
        ft_putchar(coluna1 % 10 + '0');
        write(1,"\n",1);
        coluna1++;
    }
    
}

int main(void)
{
    basecamp();
    return(0);
}