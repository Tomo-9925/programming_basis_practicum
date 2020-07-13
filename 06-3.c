#include "stdio.h"

int main() {
    int num;
    int i, j;

    //九九を表示
    for (j=1;j<10;j++) {
        for (i=1;i<10;i++) {
            if (0==i*j/10) {
                printf("  %d", i*j);	//数字が1桁の時はスペースx2
            } else {
                printf(" %d", i*j);
            }
        }
        printf("\n");
    }

    //数値の入力
    printf("数値を入力:");
    scanf("%d", &num);

    //奇数か偶数かを出力
    if (0==num%2) {
        printf("入力値（%d）は偶数です\n", num);
    } else {
        printf("入力値（%d）は奇数です\n", num);
    }

    //該当する九九の表示
    printf("入力値（%d）に該当する九九\n", num);
    for (j=1;j<10;j++) {
        for (i=1;i<10;i++) {
        	//i*j=numの時出力
            if (num==i*j) {
                printf("%d × %d = %d\n", j, i, num);
            }
        }
    }

    return 0;
}
