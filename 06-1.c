#include "stdio.h"

int main() {
    int num1, num2, tmp;

    //値の入力
    printf("1つ目の数値:");
    scanf("%d", &num1);

    printf("2つ目の数値:");
    scanf("%d", &num2);

    //num1に大きい値を入れる
    if (num1<num2) {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    //出力
    while (num1>=num2) {
        printf("%d, ", num1);
        num1--;
    }

    return 0;
}
