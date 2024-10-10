#include <stdio.h>

int main() {
    int T, R1, R2, R3;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &R1, &R2, &R3);

        if (R1 > R2 + R3 || R2 > R1 + R3 || R3 > R1 + R2) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}