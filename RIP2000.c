#include <stdio.h>

int main() {
    int N, totalAmount, num500Notes;

    scanf("%d", &N);

    totalAmount = N * 2000;
    num500Notes = totalAmount / 500;

    printf("%d\n", num500Notes);

    return 0;
}
