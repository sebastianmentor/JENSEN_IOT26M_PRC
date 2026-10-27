#include <stdio.h>

typedef struct { 
    int id; 
    double varde; 
}Sensor;

void dubbla(Sensor *s) 
{
    s->varde = s->varde * 2;
}

int main(void) 
{
    Sensor s1 = {1, 21.5};
    
    FILE *fil = fopen("sensor.dat", "wb");

    if (fil == NULL) return 1;

    fwrite(&s1, sizeof(Sensor), 1, fil);

    fclose(fil);

    dubbla(&s1);
    printf("%.2f\n", s1.varde);

    return 0;
}