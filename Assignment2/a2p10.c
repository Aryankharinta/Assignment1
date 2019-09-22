#include<stdio.h>
#include<math.h>
int main()
{
	float h, k, r, s, l;
	printf("\nWrite the centres of circle(h,k) and radius r respectively ");
	scanf("%f %f %f",&h,&k,&r);

	printf("\nWrite the value of s, which is distance of perpendicular line on x axis ");
	scanf("%f",&s);
	l=2*(sqrt(r*r-(pow(h-s,2))));
	printf("\nThe length of chord is %f",l);
}
