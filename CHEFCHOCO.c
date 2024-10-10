#include <stdio.h>

int main(void) {
    int i,t,c,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&c,&x,&y);
	    printf("%d\n",(c-x)*y);
	}
	return 0;
}
