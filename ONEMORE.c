#include <stdio.h>

int main(void) {
	// your code goes here
	int T; 
    scanf("%d", &T);

    while (T--) {
        int X; 
        scanf("%d", &X);

        if (X > 24) {
            printf("Yes\n"); 
        } else {
            printf("No\n"); 
        }
    }

    return 0;

}
