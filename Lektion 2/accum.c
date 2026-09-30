#include <stdio.h>

int main(void)
{

    int sum=0; 
    for(int reading=1;reading<=4;reading++)
    {
        int value = 0;
        printf("Varde%d:",reading);
        scanf("%d",&value);
        sum+=value;
    }
    printf("Summa:%d\n",sum);
}