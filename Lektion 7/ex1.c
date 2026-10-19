#include <stdio.h>

typedef struct { int id; double varde; } Sensor;
typedef struct { int total; Sensor my_sensor[100]; } Sensorer;


void print_sensorer(Sensorer s)
{
    for(int i = 0; i < s.total; i++)
    {
        printf("Sensor %d has value %.2f\n", s.my_sensor[i].id, s.my_sensor[i].varde);
    }
}

void justera(Sensor *s, double delta)
{
    s->varde = s->varde + delta;
}

void better_print_sensorer(Sensorer *s)
{   
    int total = s->total;
    for(int i = 0; i < total; i++)
    {
        printf("Sensor %d has value %.2f\n", s->my_sensor[i].id, (*s).my_sensor[i].varde);
    }
}

void fill_sensorer_sensor_id(Sensorer *s)
{
        for(int i = 0; i < s->total; i++)
    {
        s->my_sensor[i].id = i+1;
        (*s).my_sensor[i].varde = 20.05;
    }
}

void fordubbla(Sensor s) 
{
    s.varde = s.varde * 2;
    printf("Sensor s.varde = %.2f\n", s.varde);
}

int main(void) 
{
    Sensor s1 = {1, 21.5};
    printf("Size of int is %zu\n", sizeof(int));
    printf("Size of double is %zu\n", sizeof(double));
    printf("Size of s1 is %zu\n", sizeof(s1));
    fordubbla(s1);
    printf("%.1f\n", s1.varde);

    Sensorer S1;
    S1.total = 10;

    fill_sensorer_sensor_id(&S1);

    printf("\n\n");
    print_sensorer(S1);

    justera(&S1.my_sensor[1], 0.3);

    printf("\n\n");
    better_print_sensorer(&S1);



    Sensor *sptr = S1.my_sensor;
    printf("sptr %p\n", (void *)sptr);
    printf("sptr %p\n", (void *)S1.my_sensor);

    printf("sptr[1].id = %d\n", sptr[1].id);
    printf("(*(sptr + 1)).id = %d\n", (*(sptr + 1)).id);
    printf("(sptr + 1)->id = %d\n", (sptr + 1)->id);

    return 0;
}