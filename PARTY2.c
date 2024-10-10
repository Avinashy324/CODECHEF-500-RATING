#include <stdio.h>

int main() {
int T, N, X, K;

scanf("%d", &T);

while (T--) {
    scanf("%d %d %d", &N, &X, &K);

    if (N * X <= K) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

return 0;
}