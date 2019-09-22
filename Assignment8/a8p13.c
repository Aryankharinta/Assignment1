#include<stdio.h>
int main()
{
        int n,x,i,b=0;
	float a,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                if(x%2==1)
		{
	              s=s+x;	
	              b++;
		}

                
        }
	a=s/b;
        printf("average is %f",a