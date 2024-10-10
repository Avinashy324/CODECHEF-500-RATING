#include <stdio.h>

int main(void) {
	// your code goes here
 int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, Y; 
        scanf("%d %d %d", &N, &X, &Y);

        int total_read_pages = X * Y;

        if (total_read_pages >= N) {
            printf("YES\n"); 
        } else {
            printf("NO\n"); 
        }
    }

    return 0;
}
