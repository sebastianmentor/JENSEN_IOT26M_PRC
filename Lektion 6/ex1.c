#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) 
{
    printf("int: %zu byte\n", sizeof(int));
    printf("long int: %zu byte\n", sizeof(long long int));
    printf("double: %zu byte\n", sizeof(double));
    printf("(void *): %zu byte\n", sizeof(void *));

    int antal = 5;
    int *sensorer = malloc(antal * sizeof(int));
    
    printf("The local address for antal on the stack in main is %p\n", (void *)&antal);
    printf("The local address for sensorer on the stack in main is %p\n", (void *)&sensorer);

    if (sensorer == NULL) 
    {
    printf("Minnet kunde inte allokeras.\n");
    return 1;
    }

    printf("sensorer ger %p\n", (void *)sensorer);
    printf("*sensorer ger %d\n", *sensorer);
    
    for(int i = 0; i < antal; i++)
    {
        printf("Int value for sensorer[%d] is %d and is located at %p\n", i, sensorer[i], (void *)(sensorer + i));
        // sensorer[1] -> *(sensorer + 1)
    }
    
    sensorer[0] = 21;
    printf("%d\n", sensorer[0]);
    
    // kill our self
    int **ptr = &sensorer;
    printf("**ptr gives %d\n", **ptr);




    int *tmp = realloc(sensorer, (antal + 5) * sizeof(int));
    if (tmp == NULL) 
    {
        free(sensorer);
        return 1;
    }
    sensorer = tmp;

    printf("\n\n");

    for(int i = 0; i < antal + 5; i++)
    {
        printf("Int value for sensorer[%d] is %d and is located at %p\n", i, sensorer[i], (void *)(sensorer + i));
        // sensorer[1] -> *(sensorer + 1)
    }

    for(int i = 0; i < antal + 5; i++)
    {
        *(sensorer + i) = i+1;
        // sensorer[i] = i+1;
    }

    printf("\n\n");

    for(int i = 0; i < antal + 5; i++)
    {
        printf("Int value for sensorer[%d] is %d and is located at %p\n", i, sensorer[i], (void *)(sensorer + i));
        // sensorer[1] -> *(sensorer + 1)
    }

    int *tmp2 = realloc(sensorer, (antal - 2) * sizeof(int));
    if (tmp2 == NULL) 
    {
        free(sensorer);
        return 1;
    }
    sensorer = tmp2;

    printf("\n\n");

    for(int i = 0; i < antal - 2; i++)
    {
        printf("Int value for sensorer[%d] is %d and is located at %p\n", i, sensorer[i], (void *)(sensorer + i));
        // sensorer[1] -> *(sensorer + 1)
    }    

    printf("Now we free sensorer\n");
    free(sensorer);
    // printf("Now we free it again\n");
    // free(sensorer);

    printf("sensorer ger %p\n", (void *)sensorer);
    printf("Lets try see if we can do *sensorer %d\n", *sensorer);
    sensorer = NULL;
    printf("sensorer ger %p\n", (void *)sensorer);
    printf("Lets try see if we can do *sensorer %d\n", *sensorer);

    printf("This line will not probably be printed due to undefined behavior!\n");

    return 0;
}