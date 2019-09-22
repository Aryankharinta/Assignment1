#include<stdio.h>
int main()
{
	int i,n,x,a,b,c,d,s=0;
	printf("Given numbers n: ");
	scanf("%d",&n);
	printf("Give %d numbers: ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a=x%100;
		b=x%10;
		c=(x-a)/10;
		d=b+c;
		s=s+d;
	}
	printf("%d",s);
}
	
