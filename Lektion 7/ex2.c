#include <stdlib.h>
#include <stdio.h>

void shift_secret_char(char *c);
void shift_secret_int(int *secret);

int main(void)
{
    char secret_char = 'a';
    int secret_int = 42;

    printf("%c\n", secret_char);
    printf("%d\n", secret_int);

    char name[] = "Sebastian";

    printf("name has address %p and also the char array %s\n", (void *)name, name);

    // pointer hell

    char *secret_char_pointer = &secret_char;
    int *secret_int_pointer = &secret_int;
     
    printf("%c\n", *secret_char_pointer);
    printf("%d\n", *secret_int_pointer);    

    // tri parts of pointer 

    int *ptr = NULL;

    printf("&ptr we get: %p\n", (void *)&ptr);
    printf("ptr we get: %p\n", (void *)ptr);

    ptr = &secret_int; 
    printf("After: ptr = &secret_int;\n");
    printf("ptr we get: %p\n", (void *)ptr);
    printf("*ptr we get: %d\n", *ptr);

    shift_secret_char(&secret_char);
    shift_secret_char(secret_char_pointer);
    shift_secret_int(secret_int_pointer);
    printf("%c\n", secret_char);
    printf("%d\n", secret_int);

    //

    scanf("%c", &secret_char);

    printf("secret char now has the symbol %c\n", secret_char);

}

void shift_secret_char(char *c)
{
    *c = *c + 1;
}

void shift_secret_int(int *secret)
{

    printf("&secret we get: %p\n", (void *)&secret);
    printf("secret we get: %p\n", (void *)secret);
    printf("*secret we get: %d\n", *secret);
    *secret = *secret + 1;
}