#include <stdio.h>

int main() {
	float height, weight, a_weight;

	printf("身長 : ");
	scanf("%f", &height); //身長を入力

	printf("体重 : ");
	scanf("%f", &weight);	//体重を入力

	a_weight = (height-100)*0.9;
	printf("標準体重 : %.1f です。\n",a_weight);

	if (weight-a_weight>5) {	//分岐処理
		printf("少し太っています。");
	} else if (weight-a_weight<5) {
		printf("少し痩せています。");
	} else {
		printf("体重は適正です。");
	}

	return 0;
}
