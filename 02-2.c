#include<stdio.h>

int main(void) {
	/* 変数を宣言 */
	int a, b, c;
	int d, e, f, g;
	float h;

	/* a, b, cにそれぞれ値を代入 */
	a = 100;
	b = 30;
	c = 5;

	/* 変数dに変数aから変数bを引いた値を代入 */
	d = a - b;

	/* 変数eに変数aを2倍した値を代入 */
	e = 2 * a;

	/* 変数fに変数eを変数cで割った商を代入 */
	f = e / c;

	/* 変数gに変数eを変数dで割った余り(余剰)を代入 */
	g = e % d;

	/* 変数hに変数aを3で割った商を代入 */
	h = (float)a / 3;

	/* a~hを出力する */
	printf("aの値は%dです. \n", a);
	printf("bの値は%dです. \n", b);
	printf("cの値は%dです. \n", c);
	printf("dの値は%dです. \n", d);
	printf("eの値は%dです. \n", e);
	printf("fの値は%dです. \n", f);
	printf("gの値は%dです. \n", g);
	printf("hの値は%fです. \n", h);

	return 0;
}
