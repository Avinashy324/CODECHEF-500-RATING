#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int x,y,z,n;
	    scanf("%d %d %d",&x,&y,&z);
	   printf("%d\n",(z-y)/x);
	   
	}
	return 0;
}
