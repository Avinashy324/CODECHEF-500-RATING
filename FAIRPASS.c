#include <stdio.h>

int main() {
    int T, N, K;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &K);
        if (K >= N + 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}