#include<stdio.h>

int main() {
	int jukousha, shusseki;

	printf("受講者数を入力してください。\n");
	scanf("%d", &jukousha);
	printf("出席者の人数を入力してください。\n");
	scanf("%d", &shusseki);

	printf("出席率は、%.2f%%です。\n", (float)shusseki/jukousha*100);

	return 0;
}
