#include<stdio.h>
int main()
{
	int x,i,a,b;
	for(x=0;x<100;x++)
	{
		a=x%10;
		b=(x-a)/10;
                i=a+b;
	if(i%7==0)
	printf("%d \t",x);
	}
}
