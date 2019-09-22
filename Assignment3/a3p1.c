#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	printf("\nGive three no numbers ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%f is largest",a);
		}
		else
			printf("%f is largest",c);
	}
	if(b>c)
	{
		if(b>a)
		{
			printf("%f is largest",b);
		}
		else
			printf("%f is largest",a);
	}
	else
		printf("%f is largest",c);
}
