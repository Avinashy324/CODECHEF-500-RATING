#include <stdio.h>

int main(void) {
    int t, a, b, c, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &a, &b, &c, &x);
        
        if (a+b >= x || a+c >= x || b+c >= x)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}
