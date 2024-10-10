#include <stdio.h>

int main() {
    int N, a, b, c;
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a > b && a < c) || (a > c && a < b))
            printf("%d\n", a);
        else if ((b > a && b < c) || (b > c && b < a))
            printf("%d\n", b);
        else
            printf("%d\n", c);
    }
    
    return 0;
}
