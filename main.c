#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void jesuisunefonction(int A, char B, char* C);

int main()
{
    int nombre  = 10;
    char carater = 'A';
    char *string = "coucou";

    printf("Hello World !\n");
    jesuisunefonction(nombre, carater, string);
}

void jesuisunefonction(int A, char B, char* C)
{
    printf("coucou de la fonction !\n");
    printf("int = %d : char = %c : char * = %s !\n", A, B, C);
}