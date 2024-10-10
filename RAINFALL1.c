#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &X);
        if (X < 3) {
            printf("LIGHT\n");
        } else if (X < 7) {
            printf("MODERATE\n");
        } else {
            printf("HEAVY\n");
        }
    }
    return 0;
}
