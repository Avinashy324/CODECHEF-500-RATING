#include <stdio.h>

int main() {
    int T, X, Y, volumeChange;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        volumeChange = abs(X - Y);

        printf("%d\n", volumeChange);
    }

    return 0;
}