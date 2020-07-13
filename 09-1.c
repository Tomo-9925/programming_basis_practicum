#include <stdio.h>

float max_float (float a, float b) {
    if (a>b) return a-b;
    else return b-a;
}

int main(void) {
    float x, y;

    printf("1つ目の値 : ");
    scanf("%f", &x);

    printf("2つ目の値 : ");
    scanf("%f", &y);

    //関数呼び出し＆戻り値を直接出力
    printf("大きい値-小さい値は、%.2fです。\n", max_float(x, y));

    return 0;
}
