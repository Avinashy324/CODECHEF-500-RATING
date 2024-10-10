#include <stdio.h>

int main() {
    int T, X, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &N);
        int points_per_test_case = X / 10;
        int score = points_per_test_case * N;
        printf("%d\n", score);
    }
    return 0;
}
