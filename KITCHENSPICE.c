#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        
        if (x < 4)
            printf("MILD\n");
        else if (x < 7)
            printf("MEDIUM\n");
        else
            printf("HOT\n");
        
    }
}