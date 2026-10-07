#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Strings finns inte i C :(
int main(void)
{
    char my_name[] = "Sebastian";
    char arr_name[20] = {'H', 'e', 'l', 'l', 'o', '\0'};
    float arr_float[5] = {1.123, 12.123, 3.1234, 555.123124, -1233.12345};
    int arr_int[5] = {1000, 2000, 3000, 4000, 5000};
    int my_int = 0;


    printf("%s there with name %s\n", arr_name, my_name);
    printf("my_name has size %zu\n", sizeof(my_name));
    printf("arr_float has size %zu and arr_int size %zu\n",  sizeof(arr_float), sizeof(arr_int));
    printf("sizeof  my_int is %zu\n", sizeof(my_int));
    printf("Using strlen givs us the len of the char array! %lld\n", strlen(my_name));
    printf("arr_name has sizeof %zu and strlen %lld\n\n", sizeof(arr_name), strlen(arr_name));

    arr_name[0] = 'b';
    printf("We change H to b in arr_name and we got %s\n", arr_name);

    arr_name[1] ++;
    arr_name[2] --;

    printf("arr_name is now %s\n", arr_name);

    char small_a = 'A';
    for (int i = 0; i < 60; i++)
    {
        printf("a + %d gives char %c\n", i, small_a + i);
        arr_name[i] = small_a + i;
    }

    printf("arr_name is now %s\n", arr_name);
    printf("my_name is now %s\n", my_name);


}