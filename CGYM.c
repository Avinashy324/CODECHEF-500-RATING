#include <stdio.h>

int main(void) {
    int t, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d %d", &x, &y, &z);
        if (x + y <= z)
            printf("2\n");
        else if (x <= z)
            printf("1\n");
        else
            printf("0\n");
    }
    
	return 0;
}