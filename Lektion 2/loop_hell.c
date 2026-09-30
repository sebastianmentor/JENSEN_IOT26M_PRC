#include <stdio.h>

int main(void)
{

    int user_choice = 0;
    int number_of_loops = 0;
    while (1)
    {   
        number_of_loops ++;
        for (int i = 0; i < 3; i++)
        {
            printf("Inside loop %d\n", i);
            if ((number_of_loops + i) % 7 == 0)
            {   
                printf("Inside loop execute brake now!\n");
                break;
            }
        }
        printf("Type -1 to quit:\n>");
        scanf("%d", &user_choice);

        if (user_choice == -1) break;

    }
}