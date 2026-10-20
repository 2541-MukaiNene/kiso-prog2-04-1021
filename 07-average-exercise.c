// 基本演習：平均点が整数の割り算で切り捨てられている。小数まで正しく表示するように直す
#include <stdio.h>

int main(void)
{
    int scores[5] = {80, 75, 90, 65, 88};
    int sum = 0;
    int count = 5;
    int i;

    for (i = 0; i < count; i++) {
        sum += scores[i];
    }

    printf("%d\n", sum / count);
    return 0;
}
