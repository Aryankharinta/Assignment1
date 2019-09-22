#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<100;x++)
		if((x>50)&&(x<70)||(x>90)||(x<20))
			printf("%d \t",x);
}
