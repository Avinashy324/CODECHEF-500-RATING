#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        if (Y > X) {
            printf("%d\n", Y - X);
        } else {
            printf("0\n");
        }
    }
    
    return 0;
}
