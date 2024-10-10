#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int C; // Temperature for each test case
        scanf("%d", &C);
        
        // Determine if the climate is HOT or COLD
        if (C > 20) {
            printf("HOT\n");
        } else {
            printf("COLD\n");
        }
    }

    return 0;
}
