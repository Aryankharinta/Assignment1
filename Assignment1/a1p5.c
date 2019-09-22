#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Give the number");
	scanf("%d",&a);
	b=a%100;
	c=(a-b)/100;
	printf("The answer is %d", c);
}

