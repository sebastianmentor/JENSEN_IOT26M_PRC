// UPPGIFT (LÄTT):
// Skriv ett program där ni har en array av int med 3 stycken heltal 
// mellan 1 och 15. Användaren får sedan gissa ett tal mellan 1 och 15. 
// Vi kontrollerar såklart att användaren skrivit ett tal mellan 1 och 15. 
// Om användaren gissade något av de tre nummerna i arrayen ska vi skriva ut
// "Congrats, you manage to guess correct number. Aweseome!", annars skiver 
// vi ut "Better luck next time noob!". 

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int numbers[3] = {3, 5, 13};
    // int numbers[3];

    int user_guess = 0;
    bool not_found = true;


    // printf("user_guess is %d\n", user_guess);

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Numbers box %d hase value/bits %d\n",i+1, numbers[i]);
    // }

    printf("Enter guess between 1 and 15: ");
    scanf("%d", &user_guess);

    if (user_guess >= 1 && user_guess <= 15)
    {
        for (int index = 0; index < 3; index++)
        {
            if (user_guess == numbers[index])
            {                
                not_found = false;
                break;
            }
        }
    }
    else
    {
        printf("To bad, you cant guess mr cant read\n");
    }
    // && -> and
    // || -> or
    //  ! -> not
    if (not_found)
    {
        printf("Better luck next time noob!\n");
    }
    else
    {
        printf("Congrats, you manage to guess correct number. Aweseome!\n");
    }

}