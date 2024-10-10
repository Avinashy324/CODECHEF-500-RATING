#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &y);
        
        if (x*5 >= y)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}