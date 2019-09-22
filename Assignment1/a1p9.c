#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("Give a number");
	scanf("%d",&a);
	b=a%100;
	c=(a-b)/10;
	d=b%10;
	e=c+d;
	printf("The answer is%d",e);
}
