#include<stdio.h>
int main()
{
        int n,x,i,a,b,s;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                a=x%10;
                x=x/10;
		b=x%10;
		x=x/10;
		s=(((x*10)+a)*10)+b;
        }
        printf("sum of last digits are %d",s);
}


