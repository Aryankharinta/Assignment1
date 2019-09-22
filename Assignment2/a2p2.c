#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, e;
	printf("\nGive four points");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	e=sqrt(pow((a-c),2)+pow((b-d),2));
	printf("The distance is%f",e);
}
