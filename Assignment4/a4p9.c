#include<stdio.h>
int main()
{
	int x,i;
	for(x=0;x<100;x++)
	{
		i=x%10;
	if(i%3==0)
	printf("%d \t",x);
	}
}
