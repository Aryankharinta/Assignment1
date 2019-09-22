#include<stdio.h>
int main()
{
	int x,a,i;
	for(x=0;x<100;x++)
		a=x%10;
	i=(x-a)/10;
	if(i/3==1)
		printf("%d \t",x);
}
