// int同士の割り算は切り捨てになることを確かめる
#include <stdio.h>

int main(void)
{
    printf("%d\n", 7 / 2);
    printf("%f\n", (float)7 / 2);
    return 0;
}
