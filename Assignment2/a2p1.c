#include<stdio.h>
#include<math.h>
int main()
{
	float p, q, r, s, a;
	printf("Write the three sides of a triangle");
	scanf("%f %f %f",&p,&q,&r);
	s=(p+q+r)/2;
	a=sqrt(s*(s-p)*(s-q)*(s-r));
	printf("The area is%f",a);
}
