#include <stdio.h>

int main() {
    char word[50];
    char *pointer;
    int i = 0;

    printf("文字列の入力 : ");
    scanf("%s", word);

    pointer = word;

    printf("変換後の文字列 : ");

    for (i=0; '\0'!=*(pointer+i); i++) {
        if (64<*(pointer+i)&&*(pointer+i)<91) {
            printf("%c", *(pointer+i)+32);
        }
        if (96<*(pointer+i)&&*(pointer+i)<123) {
            printf("%c", *(pointer+i)-32);
        }
    }

    printf("\n");

    return 0;
}
