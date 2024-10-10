#include <stdio.h>

int main(void) {
    int x, n, m;
    scanf("%d%d%d", &x, &n, &m);
    
    if (n <= x+m)
        printf("Yes");
    else
        printf("No");
    
	return 0;
}