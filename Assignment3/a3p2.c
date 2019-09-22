#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter any 4 numbers ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if((a>b)&&(a>c)&&(a>d))
		printf("%d is largest",a);
	else if((b>a)&&(b>c)&&(b>d))
		printf("%d is largest",b);
	else if((c>a)&&(c>b)&&(c>d))
		printf("%d is largest",c);
	else
		printf("%d is largest",d);
}
