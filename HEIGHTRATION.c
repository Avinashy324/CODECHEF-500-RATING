#include <stdio.h>

int main() {
    int a, b, height;

    scanf("%d %d", &a, &b);

    height = (a > b) ? a : b;

    printf("%d\n", height);

    return 0;
}