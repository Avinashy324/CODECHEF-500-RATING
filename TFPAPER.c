#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);
        int scoreBob = N - K;
        printf("%d\n", scoreBob);
    }

    return 0;
}
