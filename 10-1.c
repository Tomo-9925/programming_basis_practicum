#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    double b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char c[5] = {'A', 'B', 'C', 'D', 'E'};

    int *ap = a;
    double *bp = b;
    char *cp =c;

    int i;

    for (i = 0; i < 5; i++) {
        printf("a[%d] : アドレスは %d : 値は %d\n", i, ap+i, *(ap+i));
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("b[%d] : アドレスは %d : 値は %.1f\n", i, bp+i, *(bp+i));
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("c[%d] : アドレスは %d : 値は %c\n", i, cp+i, *(cp+i));
    }

    printf("\n");

    return 0;
}
