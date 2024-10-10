#include <stdio.h>

int main() {
    int T, X1, Y1, X2, Y2, cost1, cost2;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        cost1 = X1 + Y1;
        cost2 = X2 + Y2;

        printf("%d\n", (cost1 < cost2) ? cost1 : cost2);
    }

    return 0;
}