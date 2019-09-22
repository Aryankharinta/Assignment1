#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e, s;
	printf("Write the 5 numbers");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	s=((a*c)+(b*d)+e)/sqrt((c*c)+(d*d));
	printf("Answer is%f",s);
}
