#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Strings finns inte i C :(
int main(void)
{

    char arr_name[20] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int go_again = 1;
    
    while(go_again)
    {
        printf("arr_name is now %s\n", arr_name);
        scanf("%19s", arr_name);
        printf("You wrote %s\n", arr_name);

        printf("Do you want to go again? 1=yes, 0=no\n");
        scanf("%d", &go_again);
    }


}