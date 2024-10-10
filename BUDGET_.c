#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x>=y*30)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	    t--;
	}
	return 0;
}
