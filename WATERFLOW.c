#include <stdio.h>

int main(void) {
    int t, w, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &w, &x, &y, &z);
        int temp = y*z + w;

        if (temp > x)
            printf("overflow\n");
        else if (temp == x)
            printf("filled\n");
        else
            printf("Unfilled\n");
        
    }
    
	return 0;
}