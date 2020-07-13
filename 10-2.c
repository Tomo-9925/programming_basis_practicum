#include <stdio.h>

int main() {
    char word[50];
    char *pointer;
    int i = 0;

    printf("文字列の入力 : ");
    scanf("%s", word);

    pointer = word;

    for (i=0; '\0'!=*(pointer+i); i++) {
    	printf("%d文字目 : %c\n", i+1, *(pointer+i));
    }

    return 0;
}
