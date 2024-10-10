#include <stdio.h>

int main() {
    int T, x, discount, price;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &x);

        discount = (x * 100) / 100;
        price = 100 - discount;

        printf("%d\n", price);
    }

    return 0;
}