#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        printf("%d\n", N - X);
    }
    return 0;
}
