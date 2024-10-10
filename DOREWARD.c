#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n <= 3)
            printf("BRONZE\n");
        else if (n <= 6)
            printf("SILVER\n");
        else
            printf("GOLD\n");
        
    }
    
	return 0;
}