/* Programa inicial Hello World, entendendo como usar print, main, #include <studio.h> */

#include <unistd.h>
#include <string.h>

int main(void) {
const char *mensagem  = "H";
write(1,mensagem,strlen(mensagem));
return 0;
}

 
