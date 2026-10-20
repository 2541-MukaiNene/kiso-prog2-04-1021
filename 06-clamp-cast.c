// 第2回の「明るさのクランプ」を、キャストを使って書き直す
// 一度intで計算してから範囲に収め、最後にunsigned charへキャストする
#include <stdio.h>

int main(void)
{
    unsigned char c = 230;
    int v = (int)c + 50;
    unsigned char out = (unsigned char)((v > 255) ? 255 : v);

    printf("%d\n", out);
    return 0;
}
