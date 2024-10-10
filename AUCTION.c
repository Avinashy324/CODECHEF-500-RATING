#include <stdio.h>

int main() {
    int T, A, B, C;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &A, &B, &C);
        if (A > B && A > C) {
            printf("Alice\n");
        } else if (B > A && B > C) {
            printf("Bob\n");
        } else {
            printf("Charlie\n");
        }
    }
    return 0;
}
