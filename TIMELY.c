#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X;
        scanf("%d", &X);
        if (X >= 30) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
