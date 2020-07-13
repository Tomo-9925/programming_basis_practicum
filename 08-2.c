# include <stdio.h>

int main() {
    char ch[100];
    int position;
    int i;

    printf("文字列(ch) : ");
    fgets(ch, 100, stdin);

    printf("どの位置に挿入しますか？ ");
    scanf("%d", &position);

    if (ch[position] == '\0') {
        printf("位置指定が正しくありません。\n");
        return 1;
    } else {
        printf("挿入後の文字列 : ");
        i = 0;
        while (ch[i] != '\0') {
            if (position == i+1) {
                printf("*");
            }
            printf("%c", ch[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}
