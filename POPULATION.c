#include <stdio.h>

int main() {
int T, X, Y, Z;

scanf("%d", &T);

while (T--) {
    scanf("%d %d %d", &X, &Y, &Z);
    printf("%d\n", X - Y + Z);
}

return 0;
}