#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sum_n_elemts_to_pointer(int *arr, int n, int *sum);

int main(void) 
{
    int int_arr[] = {1,2,3,4,5,6,7,8,9,10};
    int current_sum = 0;

    printf("Current_sum is %d\n", current_sum);
    sum_n_elemts_to_pointer(int_arr, 10, &current_sum);
    printf("Current_sum is %d\n", current_sum);
    sum_n_elemts_to_pointer(&int_arr[2], 3, &current_sum);
    printf("Current_sum is %d\n", current_sum);


    return 0;    
}


void sum_n_elemts_to_pointer(int *arr, int n, int *sum)
{
    int local_sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        local_sum += *(arr + i);
    }

    *sum = local_sum;
}