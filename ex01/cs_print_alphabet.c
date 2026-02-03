#include <unistd.h>

void cs_putchar(char c)
{
    write(1, &c, 1);
}


void cs_print_alphabet(void)
{
    char word = 'a';
    while(word <= 'z')
    {
          cs_putchar(word);
          word++;
    }
    cs_putchar('\n');
}
