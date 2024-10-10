#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if((a-c)>(b-d))
	    {
	        printf("Second\n");
	    }
	    else if((a-c)==(b-d))
	    {
	        printf("Any\n");
	    }
	    else
	    {
	        printf("First\n");
	    }
	}
    return 0;
}
