#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if (x >= ceil((float)n/2))
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}