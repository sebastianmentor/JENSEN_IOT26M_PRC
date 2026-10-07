#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool flag = false;
    int int_flag = 12;

    printf("flag is now %d and if we do !flag we get %d\n", flag, !flag);
    printf("We set flag to true!\n");
    flag = true;
    printf("flag is now %d and if we do !flag we get %d\n", flag, !flag);
    printf("if we do !!flag we get back what we had! %d, %d\n", flag, !!flag);

    printf("int_flag is %d and if we do !int_flag we get %d\n", int_flag, !int_flag);
}