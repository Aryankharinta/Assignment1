
#include<stdio.h>
int main()
{
        int n,x,k,i,s=0;
                printf("givem n:");
        scanf("%d",&n);
	printf("enter integer k");
	scanf("%d",&k);

        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		if((i>k)&&(x%2==0))
			
		{
			s+=x;
                }
	}
                


        printf("sum of all even number after %d is %d",k,s);
}
