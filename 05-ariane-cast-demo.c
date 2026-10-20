// Ariane 5は、速度の値を64bitの小数から16bitの整数にキャストして範囲を超えた
// double→short を直接キャストすると、値が範囲外のとき規格上は未定義動作になるため、
// ここではdouble→int（収まる）→short（16bitの範囲を超える・実装依存）の2段階にしている
#include <stdio.h>

int main(void)
{
    double speed = 40000.0;
    int speed_int = (int)speed;
    short speed16 = (short)speed_int;

    printf("%d -> %d\n", speed_int, speed16);
    return 0;
}
