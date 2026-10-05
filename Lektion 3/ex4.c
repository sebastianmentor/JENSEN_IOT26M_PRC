#include <stdio.h>


int oka(int tal);

int main(void) 
{
    int raknare = 5;
    printf("I main fore oka(raknare): %d\n", raknare);
    printf("Anropar oka och far tillbaka %d\n", oka(raknare));
    printf("Anropar oka och far tillbaka %d\n", oka(raknare));
    printf("I main efterat: %d\n", raknare);
    return 0;
}

int oka(int tal)
{
    int raknare;
    raknare = tal + 1;
    return raknare;
}