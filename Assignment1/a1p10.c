#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	printf("Give a number");
	scanf("%d",&a);
	b=a%100;
	c=b%10;
	d=(b-c)/10;
	e=a-b;
	f=e+c*10+d;
	printf("The answer is%d",f);
}
