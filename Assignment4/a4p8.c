#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<100;x++)
		if(((x%3==0)||(x%5==0))&&(x%15!=0))
			printf("%d \t",x);
}
