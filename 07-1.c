int main() {
    int eng[] = {83, 98, 56, 74, 43, 88, 9, 61, 87, 80, 69, 32, 18, 90, 46, 55, 92, 45, 67, 89, 79, 40, 47, 100, 81};
    int num, sum;
    float avg;
    int i, j;

    printf("何点以下: ");
    scanf("%d", &num);

    sum = 0;
    j = 0;

    for (i=0;i<25;i++) {
        if (eng[i] <= num) {
            sum += eng[i];
            j++;
        }
    }

    avg = (float) sum / j;

    printf("%d点以下の人の平均は, %.1f点です。\n", num, avg);

    for (i=0;i<25;i++) {
        if (eng[i]<=num) {
            printf("%d ", eng[i]);
        }
    }

    return 0;
}
