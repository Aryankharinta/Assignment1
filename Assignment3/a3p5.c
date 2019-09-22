#include<stdio.h>
int main()
{
	int a,b,c,s;
	printf("Write the coefficients of x ");
	scanf("%d",&a);
	printf("Write the coefficient of y ");
	scanf("%d",&b);
	printf("Write the constant term ");
	scanf("%d",&c);
	s=-(b/a);
	if(a==0)
	{
		printf("The line is vertical and value of slope is infinte");
	}
	else
		printf("The line is vertical and value of slope is %d",s);
}
