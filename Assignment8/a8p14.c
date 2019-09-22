#include<stdio.h>
int main()
{
        int n,x,i,a,c,s,b,d=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		c=x;
                a=x%10;
                x=x/10;
		b=x%10;
		x=x/10;
		if(a<b)
		{
			s=(((x*10)+a)*10)+b;
		}
		else
		{
			s=c;
		}
		d+=s;

        }
        printf("sum of  digits are %d",d);
}
