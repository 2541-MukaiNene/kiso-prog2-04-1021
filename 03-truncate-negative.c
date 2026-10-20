// (int)キャストは四捨五入ではなく、0方向への切り捨てであることを確かめる
#include <stdio.h>

int main(void)
{
    printf("%d\n", (int)3.9);
    printf("%d\n", (int)-3.9);
    return 0;
}
