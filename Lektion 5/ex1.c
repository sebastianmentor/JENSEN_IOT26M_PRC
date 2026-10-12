#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    // int tal = 42;
    // int tal2 = 2;    
    // printf("Adress tal: %p\n", (void *)&tal);
    // printf("Adress tal2: %p\n", (void *)&tal2);
    // printf("Varde tal: %d\n", tal);
    // printf("Varde tal2: %d\n", tal2);
    // return 0;

    int tal = 42;
    printf("Value in tal is: %d\n", tal);
    printf("Adress for tal is: %p\n", (void *)&tal);
    // printf("Can we do this?%d\n", *tal);
    printf("Enter new value for tal: ");
    scanf("%d", &tal);
    printf("New value in tal is: %d\n", tal);

    int *ptr = NULL;
    ptr = &tal;
    printf("Ptr pekar pa adress: %p\n", (void *)ptr);
    printf("Ptr finns pa adress: %p\n", (void *)&ptr);
    printf("Ptr varde om vi gar: %d\n", *ptr);

    if (tal == 33)
    {
        printf("You enter 33 right?\n");
    }
    
    printf("Lets try change tal from ptr!\n");
    if (ptr == &tal)
    {
        printf("We have that ptr == &tal!\n");
    }

    printf("Enter new value for tal:");
    scanf("%d", ptr); // ptr == &tal

    printf("Value in tal is: %d\n", tal);
    printf("Lets change back to 42 by ptr\n");
    *ptr = 42;
    printf("Value in tal is: %d\n", tal);


    return 0;    
}