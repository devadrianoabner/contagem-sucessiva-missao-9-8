#include <unistd.h>

void cs_putchar(char c)
{
    write(1, &c, 1);
}

void cs_print_reverse_alphabet(void)
{

    char word = 'z';
    while(word >= 'a')
    {
     cs_putchar(word);
     word--;
    }
    cs_putchar('\n');
}
