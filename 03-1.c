#include<stdio.h>

int main() {
	int number_1, number_2;

	printf("1つ目の数字を入力してください。\n");
	scanf("%d", &number_1);

	printf("2つ目の数字を入力してください。\n");
	scanf("%d", &number_2);

	printf("演算結果\n");
	printf("和 : %d + %d = %d\n", number_1, number_2, number_1+number_2);
	printf("差 : %d - %d = %d\n", number_1, number_2, number_1-number_2);
	printf("積 : %d × %d = %d\n", number_1, number_2, number_1*number_2);
	printf("商 : %d ÷ %d = %f\n", number_1, number_2, (float)number_1/number_2);

	return 0;
}
