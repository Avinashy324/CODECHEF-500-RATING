#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &X);
        if (X > 98) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}