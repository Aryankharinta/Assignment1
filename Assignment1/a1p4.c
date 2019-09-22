#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Give a number");
	scanf("%d", &a);
	b=a%10;
	c=(a-b)/10;
	printf("The answer is %d", c);
}	
