#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<100;x++)
		if((x>20)&&(x<40)&&(x%2==0)||(x>50)&&(x<80)&&(x%2==1))
			printf("%d \t",x);
}
