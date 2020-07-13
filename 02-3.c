#include<stdio.h>

int main(void) {
	/* 金額に対する変数moneyの宣言 */
	int money;

	/* そのほか変数の宣言 */
	int nokori, a, b, c, d, e, f, g, h;

	/* キーボードから金額を入力する */
	printf("金額を入力してください. \n");
	scanf("%d", &money);

	/* 変数moneyに設定された金額から, お礼・硬貨の内訳を算出 */
	a = money / 10000;
	nokori = money - 10000 * a;

	b = nokori / 5000;
	nokori -= 5000 * b;

	c = nokori / 1000;
	nokori -= 1000 * c;

	d = nokori / 500;
	nokori -= 500 * d;

	e = nokori / 100;
	nokori -= 100 * e;

	f = nokori / 50;
	nokori -= 50 * f;

	g = nokori / 10;
	nokori -= 10 * g;

	h = nokori / 5;
	nokori -= 5 * h;

	/* 出力 */
	printf("金額%d円の内訳を出力\n", money);
	printf("  10,000円札の枚数: %d枚\n", a);
	printf("   5,000円札の枚数: %d枚\n", b);
	printf("   1,000円札の枚数: %d枚\n", c);
	printf("     500円玉の枚数: %d枚\n", d);
	printf("     100円玉の枚数: %d枚\n", e);
	printf("      50円玉の枚数: %d枚\n", f);
	printf("      10円玉の枚数: %d枚\n", g);
	printf("       5円玉の枚数: %d枚\n", h);
	printf("       1円玉の枚数: %d枚\n", nokori);

	return 0;
}
