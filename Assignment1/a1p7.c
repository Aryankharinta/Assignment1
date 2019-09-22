#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("Give a number");
	scanf("%d",&a);
	b=a%100;
	c=b%10;
	d=(b-c)/10;
	e=c+d;
	printf("Answer is%d",e);
}
