#include <stdio.h>

int main() {
	int	english, math, japanese;

	printf("英語:");
	scanf("%d", &english);

	printf("数学:");
	scanf("%d", &math);

	printf("国語:");
	scanf("%d", &japanese);

	if (english<80) {
		if (math<80||japanese<80) {
			printf("補習を受けてください。\n");
		} else {
			printf("合格です。\n");
		}
	} else {
		if (math<80&&japanese<80) {
			printf("補習を受けてください。\n");
		} else {
			printf("合格です。\n");
		}
	}

	return 0;
}
