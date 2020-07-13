#include <stdio.h>

void makePyramid (int num, char word) {
    int i, j, k;

    j=0;

    for (i=(num*2)-1;i>0;i=i-2) {
        for (k=0;j>k;k++) {
            printf(" ");
        }
        for (k=0;i>k;k++) {
            printf("%c", word);
        }
        printf("\n");
        j++;
    }
}

int main() {
    int num;
    char word;

    printf("文字を入力 : ");
    scanf("%s", &word);

    printf("数値を入力 : ");
    scanf("%d", &num);

    printf("-----ピラミッド描画-----\n");

    makePyramid(num, word);

    return 0;
}
