# include <stdio.h>

int main() {
    char ch[100];
    char check;
    int count;
    int i;

    printf("文字列を入力してください。\n");
    fgets(ch, 100, stdin);

    printf("確認したい文字を入力してください。\n");
    scanf("%c", &check);

    i = 0;
    count = 0;

    while (ch[i] != '\0') {
        if (ch[i] == check) {
            count++;
        }
        i++;
    }

    printf("文字(%c)は%d文字あります。\n", check, count);

    return 0;
}
