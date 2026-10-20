// (int)(x + 0.5) で四捨五入ができる。ただし負の数では、そのままだとうまくいかない
#include <stdio.h>

int main(void)
{
    double x = 3.7;

    printf("%d\n", (int)(x + 0.5));
    return 0;
}
