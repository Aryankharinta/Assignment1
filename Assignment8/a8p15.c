#include<stdio.h>
int main()
{
        int n,x,i,a;
	float s=0,d=0,b;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                if(x%2==0)
		{
                   s=s+x;
		 d=d+i;
		}
	}
               b=s/d;	
                
        
        printf("average is %f",b);
}
