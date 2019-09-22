#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e, f;
	printf("Write values of a,b and c");
	scanf("%f %f %f",&a,&b,&c);
	d=-0.5*a;
	e=-0.5*b;
	f=sqrt(pow(d,2)+pow(e,2)-c);
	printf("The centre and radius is(%f, %f) %f",d,e,f);
			}
