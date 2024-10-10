#include <stdio.h>

int main() {
    int T, X, Y, doubleCost, tripleCost;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        doubleCost = 3 * X;
        tripleCost = 2 * Y;

        printf("%d\n", (doubleCost < tripleCost) ? doubleCost : tripleCost);
    }

    return 0;
}