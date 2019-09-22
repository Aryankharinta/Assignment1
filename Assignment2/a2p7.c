#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, p, q, r, h, k;
	printf("\nGive the coefficients of two lines");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
	k=(p*c-a*r)/(q*a-p*b);
	h=(-b*k-c)/a;
	printf("\nThe intersection point's coords are(%f,%f)",h,k);
}
