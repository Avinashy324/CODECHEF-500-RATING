#include <stdio.h>

int main() {
    int T, K, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &K, &X);
        int remaining_days = 7 * K - X;
        printf("%d\n", remaining_days);
    }
    return 0;
}
