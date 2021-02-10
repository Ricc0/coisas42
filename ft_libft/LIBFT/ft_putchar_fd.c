/*
Writes char c to file descriptor fd.
*/

int ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}
