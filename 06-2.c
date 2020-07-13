#include "stdio.h"

int main() {
    int num1, num2;
    int i, tmp;

    //値の入力
    printf("1つ目の数値:");
    scanf("%d", &num1);

    printf("2つ目の数値:");
    scanf("%d", &num2);

    //num1に小さい値を代入
    if (num1>num2) {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    tmp = 0;

    //式の出力と合計の算出
    for (i=num1; i<=num2; i++) {	//num1をiとして初期化
        printf("%d ", i);
        tmp += i;	//tmpにiを足していく
        if (i!=num2) {	//最後の値が出るまで"+ "を出力
            printf("+ ");
        } else {
            printf("= %d", tmp);
        }
    }

    return 0;
}
