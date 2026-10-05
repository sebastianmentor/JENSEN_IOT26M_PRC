#include <stdio.h>


int oka(int tal);

int main(void) 
{
    int raknare = 5;
    printf("I main fore oka(raknare): %d\n", raknare);
    raknare = oka(raknare);
    printf("I main efterat: %d\n", raknare);
    return 0;
}