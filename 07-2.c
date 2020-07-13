int main() {
    int data[100];
    int i = 1;
    int j;

    printf("数値を入力: ");
    scanf("%d", &data[0]);

    while (data[i-1]>0) {
        printf("数値を入力: ");
        scanf("%d", &data[i]);
        i++;
    }

    printf("出力:");

    for (j=0;j<i-1;j++) {
        printf(" %d", data[j]);
    }

    return 0;
}
