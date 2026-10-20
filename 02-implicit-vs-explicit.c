// 変数でも、intのままだと割り算が切り捨てになる。キャストすると小数になる
#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 2;

    printf("%d\n", a / b);
    printf("%f\n", (float)a / b);
    return 0;
}
