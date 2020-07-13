int main() {
    int data[100];
    int sum = 0;
    float avg;
    int i = 1;
    int j, tmp;

    printf("数値を入力:");
    scanf("%d", &data[0]);
    sum += data[0];

    if (data[0]<=0) {
        printf("数値がありません。");
        return 1;
    }

    while (data[i-1]>0) {
        printf("数値を入力:");
        scanf("%d", &data[i]);
        if (data[i]>0) {
        	sum += data[i];
        }
        i++;
    }

    i--;

    avg = (float) sum / i;

    while (i>0) {
        for (j=0;j<i;j++) {
            if (data[i]<data[j]) {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
        i--;
    }

    if (data[3]==0||data[2]==0||data[1==0]) {
        printf("1番小さい数: %d\t3番目に小さい数: 該当なし\n", data[1]);
    } else {
        printf("1番小さい数: %d\t3番目に小さい数: %d\n", data[1], data[3]);
    }

    printf("合計: %d\n", sum);
    printf("平均: %.1f", avg);

    return 0;
}
