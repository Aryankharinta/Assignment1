#include<stdio.h>
int main()
{
	int i,n,x,a,b,s=0;
	printf("Give n: ");
	scanf("%d",&n);
	printf("Give %d numbers: ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a=x%10;
		b=(x-a)/10;
		s=s+b;
	}
	printf("%d",s);
}

