#include<stdio.h>
int main()
{
	int x,i;
	for(x=0;x<100;x++)
	{
		i=x%10;
	if((i>=5)&&(i<=8))
	printf("%d \t",x);
	}
}
