#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,r,a,b,c,l,i;
	printf("Write the values of coefficient of x, coefficient of y and constant term respectively");
	scanf("%d%d%d",&a,&b,&c);

	printf("Write the values of centre of circle(x coord,y coord) and radius respectively");
	scanf("%d%d%d",&p,&q,&r);

	l=((a*p)+(b*q)+c)/sqrt(a*a+b*b);
	i=2*sqrt(r*r-l*l);

	if(l>=r)
		printf("No intersection");
	else
		printf("The length of chord is %d",i);
}
