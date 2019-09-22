#include<stdio.h>
int main()
{
	int n,x,i,a,b,c,s=0;
	printf("Given no of numbers:");
	scanf("%d",&n);
	printf("Enter %d numbers ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a=x%100;
		b=x%10;
		c=(a-b)/10;
		s=s+c;
	}
	printf("Sum of last digits are %d",s);
}
