#include<stdio.h>
int main()
{
	int i,n,x,a,b,c,s=0;
	printf("Given no n: ");
	scanf("%d",&n);
	printf("Give %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a=x%10;
		x=x/10;
		b=x%10;
		c=a*b;
	
		s=s+c;
	}
	printf("%d",s);
}

