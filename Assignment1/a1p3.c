#include<stdio.h>
int main()
{
	int a, b, c, p, s;
	printf("Give the four desired numbers");
	scanf("%d %d %d %d",&a,&b,&c,&p);
	s=a*p*p+b*p+c;
	printf("The solution of equation is %d",s);
}
