#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of a triangle, first side being biggest ");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a)==(b*b)+(c*c))
	{
		printf("Right angled triangle");
	}
	else
		printf("The triangle is not right angled");
}
