#include <stdio.h>
#include <stdlib.h> // rand関数
#include <time.h>   //time関数

void rnd_numeric (int nums[4]);   //ランダムな4桁の数字を生成

int check_numeric (int nums[4]);  //ユーザーに入力してもらう

int main (void) {
    int nums[4];
    int count = 0;
    int result = 1;

    rnd_numeric(nums);

    //check_numericから返り値 0 が来るまでループ
    while (result) {
        count++;
        result = check_numeric(nums);
    }

    printf("おめでとう！！%d回で正解です。\n", count);

    return 0;
}

void rnd_numeric(int nums[4]) {
    int i;
    int numbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tmp;

    srand(time(NULL));

    //4つの異なる乱数
    for (i=0; i<4; ) {
        tmp = rand() % 10;
        if(numbers[tmp] == 0) {
            numbers[tmp]++;
            nums[i] = tmp;
            i++;
        }
    }

    printf("4桁の数を考えました！！\n\n");

}

int check_numeric(int nums[4]) {
    int inputN;
    int inputNums[4];
    int count1 = 0;
    int count2 = 0;
    int i, j;

    //数字はscanfで大丈夫みたいです…
    printf("数を当ててください : ");
    scanf("%d", &inputN);

    if (inputN < 0 || 9999 < inputN) {
        printf("不正な値です\n");
        return 1;
    }

    inputNums[0] = inputN / 1000;
    inputNums[1] = inputN % 1000 / 100;
    inputNums[2] = inputN % 100 / 10;
    inputNums[3] = inputN % 10;

    for(i=0; i<4; i++) {
        for(j = i+1; j < 4; j++) {
        	//入力された値の各桁違うが入っていなければ再入力させる
            if (inputNums[i] == inputNums[j]) {
                printf("各桁異なる数値を入力してください。\n");
                return 1;
            }
        }
    }

    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            if(i == j && inputNums[i] == nums[i]) {
                count1++;
            }
            if(inputNums[i] == nums[j]) {
                count2++;
            }
        }
    }

    if (count1 == 4) {
        return 0;
    } else {
        printf("数:%d、桁:%d\n", count2, count1);
        return 1;
    }
}
