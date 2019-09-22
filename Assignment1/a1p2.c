#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Give the two desired numbers");
	scanf("%d %d",&a,&b);
	c=a*a+b*b*b;
	printf("The sum of squares of first and cube of second %d",c);
}
