#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_comb2(void)
{
    int coluna1;
    int coluna2;

    coluna1 = 0;

    while(coluna1 <= 99)
    {
        coluna2 = coluna1 +1;
        while(coluna2 <= 99)
        {
            ft_putchar(coluna1 /10 +'0');
            ft_putchar(coluna1 %10 +'0');
            ft_putchar(' ');
            ft_putchar(coluna2 /10 +'0');
            ft_putchar(coluna2 %10 +'0');

            if(coluna1/10 != 9 || coluna1 % 10 != 8 )
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            coluna2++;
        }
        coluna1++;
    }

}

int main(void){
    ft_print_comb2();
}

