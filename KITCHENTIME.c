#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        printf("%d\n", Y - X);
    }
    return 0;
}
