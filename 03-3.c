#include<stdio.h>

int main() {
	int number;
	char word_1;

	printf("英小文字を入力してください。\n");
	scanf("%c", &word_1);

	printf("入力した文字を英大文字に変換します。\n");
	printf("結果 : %c\n\n", word_1-0x20);

	printf("数値を入力してください。\n");
	scanf("%d", &number);

	printf("結果 : %c %c", number+0x60, number+0x40);

	return 0;
}
