#include <stdio.h>

int main() {
    int T, G, B;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &G, &B);
        printf("%d\n", B - G);
    }
    
    return 0;
}
