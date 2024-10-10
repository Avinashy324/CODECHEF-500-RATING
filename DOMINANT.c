#include <stdio.h>

int main(void) {
    int i,t,na,nb,nc,sum1,sum2,sum3;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&na,&nb,&nc);
	    sum1 = na+nb;
	    sum2 = na+nc;
	    sum3 = nb+nc;
	    if(nc>sum1 || nb>sum2 || na>sum3)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}