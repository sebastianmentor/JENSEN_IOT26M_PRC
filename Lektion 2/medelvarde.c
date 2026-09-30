#include <stdio.h>

int main(void)
{
    int sum = 0;
    /*Las exakt fem heltalsmatningar.*/
    /*Skriv ut medelvardet som decimal.*/
    for (int i = 0; i <= 4; i++)
    {
        int value = 0;
        printf("Enter number %d:\n>", i + 1);
        scanf("%d", &value);
        sum = sum + value;
    }
    float total = (float) sum;

    printf("Avrage value is %f", total/5);

    return 0;
}