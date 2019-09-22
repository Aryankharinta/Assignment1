
#include<stdio.h>
int main()
{
        int n,x,i,c=0,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		
		if(x%2==0)
		{
			c++;
		
		
		while(c>=1)
		
			s=s+x;
		}
		else 
			continue;

	}

        printf("sum is %d",s);
}

