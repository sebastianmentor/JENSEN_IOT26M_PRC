#include <stdio.h>

int main(void) 
{
    // int summa = 0;
    // int antal = 5;

    // for (int i = 0; i < antal; i++) {
    //     int varde;
    //     printf("Ange matvarde: ");
    //     scanf("%d", &varde);
    //     summa += varde;
    // }
    // printf("Medelvarde: %.1f\n", (double)summa / antal);


    // int x = 0;
    // for (int i = 0; i < 3; i++) 
    // {
    //     x = x + i;
    // }
    // printf("%d\n", x);

    int biggest;

    printf("Enter integer: ");
    scanf("%d", &biggest);

    for (int i = 0; i < 4; i++) 
    {
        int value;
        printf("Enter next integer: ");
        scanf("%d", &value);
        if(value > biggest)
        {
            biggest = value;
        }
    }
    printf("Biggest value was: %d", biggest);


    return 0;
} 