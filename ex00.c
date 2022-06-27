#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    
    int age = 0;
    char *result = malloc(sizeof(char) * 100);

    printf("Quel âge avez vous ? \n");
    scanf("%s", result);
    printf("input =  '%s' . \n", result);

    int i = 0;
    while(result[i] != '\0')
    {
        if (result[i] >= '0' && result[i] <= '9'){
            i++;
        }
        else 
        {
            printf("bad carater \n");
            return 1;
        }
    }
    age = atoi(result);
    printf("Vous avez donc %d ans ! \n", age);
    
    return 0;
}

