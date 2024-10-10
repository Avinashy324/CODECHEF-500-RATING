#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, x, discount;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &x);
        discount = x*0.1;
        printf("%d\n", max(discount, 100));
    }
    
	return 0;
}
