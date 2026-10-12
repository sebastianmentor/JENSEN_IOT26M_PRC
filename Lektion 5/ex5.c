#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_ARRAY_SIZE 20

void swap(int *a, int *b);
void print_list_of_numbers(int *arr);

int main(void) 
{
    srand(time(NULL)); // Seed with current time
    int arr_of_numbers[MAX_ARRAY_SIZE];
    int min_value;
    int max_value; 

    for(int i = 0; i < MAX_ARRAY_SIZE; i++)
    {
        arr_of_numbers[i] = rand() % 100;
    }

    print_list_of_numbers(arr_of_numbers);

    for(int index = 0; index < MAX_ARRAY_SIZE; index++)
    {
        for (int sub_index = index + 1; sub_index < MAX_ARRAY_SIZE; sub_index ++)
        {
            if(arr_of_numbers[index] > arr_of_numbers[sub_index])
            {
                swap(&arr_of_numbers[index], &arr_of_numbers[sub_index]);
            }
        }
    }

    print_list_of_numbers(arr_of_numbers);

    return 0;    
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_list_of_numbers(int *arr)
{
    printf("The numbers are[");
    for(int i = 0; i < MAX_ARRAY_SIZE - 1; i++)
    {
        printf("%d, ", *(arr + i));
    }
    printf("%d]\n", *(arr + MAX_ARRAY_SIZE-1));
}
