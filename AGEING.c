#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d", &X);
        printf("%d\n", X - 10);
    }
    
    return 0;
}
