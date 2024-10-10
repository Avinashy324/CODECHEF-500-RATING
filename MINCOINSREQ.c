#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);
        int coins = X % 10;
        printf("%d\n", coins);
    }

    return 0;
}
