#include <stdio.h>

int main(void)
{
    int age = 0;
    char my_char = 'y';
    char my_char2 = 121;
    float pi = 3.1415;
    printf("Försöker skriva på svenska!\n");

    printf("my_char has character %c\n", my_char);
    printf("my_char has character %c and my_char2 has character %c", my_char, my_char2);

    printf("Change char:\n>");
    scanf("%c", &my_char);
    
    printf("my_char is now %c\n", my_char);
    
    printf("In the begining we have that age is %d\n", age);
    printf("Enter your age:\n>");
    scanf("%d", &age);
    printf("Your age is %d years old!\n", age);

    printf("Pi is rougly %.4f", pi);



    return 0;
}