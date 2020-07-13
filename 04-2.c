#include <stdio.h>

int main() {
	int number;

	printf("会員番号 : ");
	scanf("%d", &number);	//会員番号入力

	switch (number) {	//分岐処理
	case 1:
		printf("あなたはグループCです。");
		break;
	case 5:
	case 7:
		printf("あなたはグループDです。");
		break;
	case 3:
	case 6:
	case 9:
		printf("あなたはグループAです。");
		break;
	case 0:
	case 2:
	case 4:
	case 8:
		printf("あなたはグループBです。");
		break;
	default:
		printf("会員番号入力に誤りがありました。");
		break;
	}
}
