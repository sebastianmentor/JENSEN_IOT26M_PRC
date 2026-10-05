#include <stdio.h>


void oka(int tal) 
{
    tal = tal + 1;
    printf("Inne i funktionen: %d\n", tal);
}

int main(void) 
{
    int raknare = 5;
    printf("I main fore oka(raknare): %d\n", raknare);
    oka(raknare);
    printf("I main efterat: %d\n", raknare);
    // printf("Tal efter oka ar: %d\n", tal);
    return 0;
}