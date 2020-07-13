#include <stdio.h>

int main() {
	int fluit, number;
	float calorie;

	printf("商品番号 : ");	//商品番号入力
	scanf("%d", &fluit);

	if (fluit<=0 || fluit>4){	//商品番号のエラー表示
		printf("商品番号が間違ってます。");
		return 1;
	}

	printf("数量 : ");	//数量入力
	scanf("%d", &number);

	if (number<0) {	//数量のエラー表示
		printf("数量が間違っています。");
		return 1;
	}

	switch (fluit) {	//カロリー計算の分岐
	case 1:
		calorie = number * 140.5;
		printf("リンゴ %d 個分の摂取カロリーは %f (Kcal)です。\n", number, calorie);
		break;
	case 2:
		calorie = number * 42.25;
		printf("みかん %d 個分の摂取カロリーは %f (Kcal)です。\n", number, calorie);
		break;
	case 3:
		calorie = number * 2.41;
		printf("ラズベリー %d 個分の摂取カロリーは %f (Kcal)です。\n", number, calorie);
		break;
	case 4:
		calorie = number * 700.6;
		printf("パイナップル %d 個分の摂取カロリーは %f (Kcal)です。\n", number, calorie);
		break;
	}

	if (calorie>500) {	//500kcal以上の時の表示
		printf("摂取カロリーが500Kcalを超えています。");
	}

	return 0;
}
