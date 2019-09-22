#include<stdio.h>
#include<math.h>
int main()
{
	float d, b, c, s, y, z;
	printf("\nWrite the three sides of a triangle ");
	scanf("%f %f %f",&d,&b,&c);
	s=-(d*d-b*b-c*c)/2*b*c;
	y=acos(s);
	z=y*180/3.14;
	printf("The value of angle is %f degree",z);
}
