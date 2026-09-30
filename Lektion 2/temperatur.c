#include<stdio.h>
int main(void)
{ 
    int humidity=0; 
    printf("Luftfuktigheti procent: ");
    scanf("%d",&humidity); 
    /*Fyllivillkoren.*/ 

    if ((humidity < 0) || (humidity > 100)) 
    {
        printf("Ogilgtligt Value\n");
    }
    else if (humidity < 30)
    {
        printf("Torrt\n");
    }
    else if (humidity >= 30 && humidity <= 60)
    {
        printf("Bra\n");
    }
    else
    {
        printf("Fuktigt\n");
    }

    if (30<=humidity<=60) // dont work correct!
    {
        printf("30<=humidity<=60 works!\n");
    }
    
    return 0;

}

// Skriv Torrt under 30, Bra från 30 till 60 och annars Fuktigt. 
// Om värdet är utanför 0-100 ska vi skriva Oglitligt värde!
// Testa 29,30,60,61, -23 och 131.