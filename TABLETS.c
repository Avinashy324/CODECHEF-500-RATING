#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);

        if (y >= x*3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
	return 0;
}