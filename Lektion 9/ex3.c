#include <stdio.h>
#include <stdlib.h>

void print_int(int *varden, int antal) 
{
    for (int i = 0; i < antal; i++)
    {
        printf("%d ", *(varden + i));
    }
    printf("\n");
}

void fyll(int *varden, int antal) 
{
    for (int i = 0; i < antal; i++) varden[i] = i * 10; // varden[i] <--> *(varden + i)
}
int main(void) 
{
    int *sensorer = malloc(4 * sizeof(int));

    if (sensorer == NULL) return 1;

    fyll(sensorer, 4);

    // printf("%d\n", sensorer[2]);
    print_int(sensorer, 4);

    free(sensorer);

    return 0;
}