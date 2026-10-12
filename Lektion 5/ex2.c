#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void double_the_value(double *value);
void square_the_value(double *value);

int main(void) 
{
    double number1 = 2.10;
    double number2 = 3.14;

    double *dptr = &number1; 

    printf("number1 has address: %p\n", (void *)&number1);
    printf("number2 has address: %p\n", (void *)&number2);

    int user_choice = 0;
    while(true)
    {
        printf("1. Show values for number1 and number2\n");
        printf("2. Show dptr:s value\n");
        printf("3. Show what dptr points to\n");
        printf("4. Swap number box\n");
        printf("5. Swap dptr points to\n");
        printf("6. Change value by dptr\n");
        printf("7. Double the value!\n");
        printf("8. Square the value\n");
        printf("9. Exit program\n");

        scanf("%d", &user_choice);
        if(user_choice == 1)
        {
            printf("number1 and number2 has values %.2lf, %.2lf\n\n", number1, number2);            
        }
        else if (user_choice == 2)
        {
            printf("dptr:s value is %p\n", (void *)dptr);
        }
        else if (user_choice == 3)
        {
            printf("dptr value if we follow the address is %.2lf\n\n", *dptr);
        }
        else if (user_choice == 4)
        {
            int tmp = number1;
            number1 = number2;
            number2 = tmp;
        }        

        else if (user_choice == 5)
        {
            if(dptr == &number1)
            {
                dptr = &number2;
            }
            else
            {
                dptr = &number1;
            }
        }   
        
        else if (user_choice == 6)
        {
            printf("Enter new value: ");
            scanf("%lf", dptr);
        } 

        else if (user_choice == 7)
        {
            double_the_value(dptr);
        } 

        else if (user_choice == 8)
        {
            square_the_value(dptr);
        }         

        else if (user_choice == 9)
        {
            break;
        }   
        else
        {
            printf("Incorrect choice mr idiot?\n Try again!!!\n");
        }

    }   

    return 0;    
}

void double_the_value(double *value)
{
    *value = (*value) * 2;
}

void square_the_value(double *value)
{
    *value = (*value) * (*value);
}