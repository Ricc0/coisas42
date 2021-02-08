#include<unistd.h>

void print_reverse_alphabet(void)
{
    char zalf;
    zalf = 122;

    while(zalf >= 97)
    {
        write(1,&zalf,1);
        zalf--;
    }
}

int main(void)
{
    print_reverse_alphabet();
    return(0);
}
