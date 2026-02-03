# include <unistd.h>

void cs_putchar(char c)
{
write(1,&c,1);
}



