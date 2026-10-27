#include <stdio.h>

int storsta_varde(int varden[], int antal)
{
    int storst = varden[0];
    for(int i = 1; i < antal; i++)
    {
        if(storst < varden[i])
        {
            storst  = varden[i];
        }
    }

    return storst;

}

double medelvarde(int varden[], int antal) 
{
    int summa = 0;
    for (int i = 0; i < antal; i++) 
    {
        summa += varden[i];
    }
    return (double)summa / antal;
}

int main(void) 
{
    int sensorer[4] = {21, 19, 23, 18};
    printf("%.1f\n", medelvarde(sensorer, 4)); // medelvarde(sensorer, sizeof(sensorer)/sizeof(sensorer[0]))

    int storst = storsta_varde(sensorer, 4);
    printf("Storsta vardet ar %d\n", storst);
    return 0;
}