#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFERT_SIZE 10

bool skapa_buffert(int antal, int **ptr)
{   
    printf("&ptr = %p\n", (void *)&ptr);
    printf("ptr = %p\n", (void *)ptr);
    printf("*ptr = %p\n", (void *)*ptr);
    // printf("**ptr = %p\n", (void *)&ptr);

    // int local_data[100]; // Lever bara så länge skapa_buffert lever
    int *data = malloc(antal * sizeof(int));

    if (data == NULL)
    {
        return false;
    }

    *ptr = data;
    return true;
    // free(data) saknas har, minnet lacker
    // data = NULL
    // free(data);
    // data = NULL;
    // if (!(data == NULL))
    // {
    //     printf("We still have the address for the memeory that we have use free on!\n");
    //     data = NULL;
    // }
    // return data;
}

void increase_int(int *int_ptr)
{
    *int_ptr ++;
}


int *skapa_buffert_v2(int antal)
{
    // int local_data[100]; // Lever bara så länge skapa_buffert lever
    int *data = malloc(antal * sizeof(int));

    if (data == NULL)
    {
        return NULL;
    }

    return data;

}

int main(void) 
{   
    int my_int = 3;
    printf("my_int %d\n", my_int);
    increase_int(&my_int);
    printf("my_int %d\n", my_int);

    int *my_buff = NULL;
    printf("&my_buff = %p\n", (void *)&my_buff);
    bool got_buffert = skapa_buffert(BUFFERT_SIZE, &my_buff);

    if (!got_buffert)
    {
        printf("Fail allocation...... Screw this! I am out!\n");
        return 1;       
    }
    // free(NULL);

    int *my_buff_2 = skapa_buffert_v2(BUFFERT_SIZE);
    if (my_buff_2 == NULL)
    {
        printf("Fail allocation...... Screw this! I am out!\n");
        return 1;   
    }
    ////////////////////////////////////////////////
    /////////     my_buff print ////////////////////
    ////////////////////////////////////////////////
    for(int i = 0; i < BUFFERT_SIZE; i++)
    {
        my_buff[i] = i*i;
    }

    for(int i = 0; i < BUFFERT_SIZE; i++)
    {
        printf("my_buff[%d] is %d\n", i, my_buff[i]);
    }

    ////////////////////////////////////////////////
    /////////     my_buff_2 print ////////////////////
    ////////////////////////////////////////////////

    for(int i = 0; i < BUFFERT_SIZE; i++)
    {
        my_buff[i] = i*i;
    }

    for(int i = 0; i < BUFFERT_SIZE; i++)
    {
        printf("my_buff_v2[%d] is %d\n", i, my_buff[i]);
    }

    free(my_buff_2);
    free(my_buff);
    return 0;
}