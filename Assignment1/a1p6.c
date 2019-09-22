#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Give a number");
	scanf("%d",&a);
	b=a%100;
	c=b%10;
	d=(b-c)/10;
	printf("The desired result is%d",d);
}
