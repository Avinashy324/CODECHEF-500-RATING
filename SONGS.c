#include <stdio.h>

int main(void) {
    int i,t,n,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&x);
	    printf("%d\n",n/(3*x));
	}
	return 0;
}