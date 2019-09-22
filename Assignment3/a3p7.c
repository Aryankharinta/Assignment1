#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,h,i;
	printf("Write the coefficient of x*x ");
	scanf("%f",&a);

	printf("Write the coefficent of x ");
	scanf("%f",&b);

	printf("Write the constant term ");
	scanf("%f",&c);
	d=(-b+sqrt(b*b-4*a*c))/(2*a);
	e=(-b-sqrt(b*b-4*a*c))/(2*a);
	f=b*b-4*a*c;
	i=sqrt(-f)/2*a;
	g=-b/2*a;
	h=-i;

	if(d==e)
		printf("The roots are equal and thier value is %f",d);
	else if(f<=0)
		printf("The roots are imaginary and their value is %f+%fi and %f%fi",g,i,g,h);
	else 
		printf("The value of roots are %f and %f",d,e);
}
	


