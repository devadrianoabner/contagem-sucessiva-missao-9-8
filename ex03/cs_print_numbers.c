#include <unistd.h>

void  cs_putchar(char c)
{
    write(1, &c, 1);
}

void cs_print_numbers(void)
{
    char number = 48;
    while(number <= 57)
    {
        cs_putchar(number);
        number++;
    }
   cs_putchar('\n');
}
