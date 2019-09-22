#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e, f, s;
	printf("Write 6 points");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
       s=0.5*((a*(d-f))-(c*(b-f))+(e*(b-d)));
       printf("The area is%f",s);
} 
