#include<stdio.h>

int main(void) {
	/* 変数a、b、cを宣言 */
	int a;
	char b;
	float c;

	/* aに「12」、bに「P」、cに「3.2」を設定 (set) */

	a = 12;
	b = 'P';
	c = 3.2;

	/* 変数aの値を参照 (refer) */
	printf("aの値は%dです。 \n", a);
	printf("bの値は%cです。 \n", b);
	printf("cの値は%fです。 \n", c);

	return 0;
}
