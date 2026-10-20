// 前回(#3)の持ち越し：1 << n でn番目のビットだけを操作し、LEDの点灯・消灯に見立てて表示する
#include <stdio.h>

void show(unsigned char leds){
    for (int i = 7; i >= 0; i--) {
        printf("%s", (leds & (1 << i)) ? "●" : "○");
    }
    printf("\n");
}

int main(void){
    unsigned char leds = 0;
    leds = leds | (1 << 0); /* 0番目を点ける */
    show(leds);
    leds = leds | (1 << 2); /* 2番目を点ける */
    show(leds);
    leds = leds & ~(1 << 0); /* 0番目を消す */
    show(leds);
    return 0;
}
