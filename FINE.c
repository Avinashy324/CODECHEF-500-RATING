#include <stdio.h>

int main() {
    int T, X, fine;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &X);

        if (X <= 70) {
            fine = 0;
        } else if (X <= 100) {
            fine = 500;
        } else {
            fine = 2000;
        }

        printf("%d\n", fine);
    }

    return 0;
}