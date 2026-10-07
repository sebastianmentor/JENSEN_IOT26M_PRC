// UPPGIFT MEDEL:
// Skriv ett program där användaren får skriva in hur 
// många tal den vill mata in mellan 1 och 10. 
// Därefter låter vi användaren skriva in så många tal som hen angett. 
// Därefter vill vi skriva ut det största talet som skrevs in, 
// det minsta talet, medelvärdet samt hur många jämna 
// och udda tal som fanns. Vi förväntar oss korrekt typ 
// av inmatning men det finns risk för felaktigt val av 
// antal element som ska tas emot och det behövs därför kontrolleras.

#include <stdio.h>
#include <stdbool.h>
#define ARR_MAX_SIZE 10

int main(void)
{
    int times = 0;
    int arr_numbers[ARR_MAX_SIZE] = {0};

    while(true)
    {
        printf("Enter how many numbers you want to enter?(1-10): ");
        scanf("%d", &times);

        if (0 < times && times < 11)
        {
            break;
        }
        else
        {
            printf("Number must between 1 and 10\n");
        }
    }

    // do
    // {
    //     printf("Enter how many numbers you want to enter?(1-10): ");
    //     scanf("%d", &times);
    // }
    // while(times < 1 || times > 10);
    // From here, times is between 1 and 10

    // så länge times är mindre än 1 eller större än 10
    // ...-2,-1,0,|1....10|11,12,13....
    
    /*From here, times will be between 1 and 10!*/

    for(int i = 0; i < times; i++)
    {
        int new_number;
        printf("Enter number %d: ", i+1);
        scanf("%d", &new_number);
        arr_numbers[i] = new_number;
    }


    int biggest_number = arr_numbers[0];

    for(int i = 0; i < times; i++)
    {
        if(biggest_number < arr_numbers[i])
        {
            biggest_number = arr_numbers[i];
        }
    }

    printf("Biggest number was %d\n", biggest_number);

    int smallest_number = arr_numbers[0];

    for(int i = 0; i < times; i++)
    {
        if(smallest_number > arr_numbers[i])
        {
            smallest_number = arr_numbers[i];
        }
    }

    printf("Smallest number was %d\n", smallest_number);

    int total_sum = 0;
    int total_even = 0;
    int total_odd = 0;

    for(int i = 0; i < times; i++)
    {
        if(arr_numbers[i] % 2 == 0)
        {
            total_even ++;
        }
        else
        {
            total_odd ++;
        }
        total_sum +=arr_numbers[i];

    }

    printf("Total number of even was %d, total odd is %d\n", total_even, total_odd);
    printf("The sum of all numbers is %d and avrage is %.2f\n", total_sum, (double)total_sum/times);

    for(int i = 0; i < ARR_MAX_SIZE + 100; i++)
    {
        printf("Box nr %d has value %d\n", i+1, arr_numbers[i]);
    }

}