#include<stdio.h>
int main()
{
	int x;
	for(x=0;x<100;x++)
		if((((x>9)&&(x<30))||((x>39)&&(x<60))||((x>69)&&(x<90)))&&(x%2==0))
			printf("%d \t",x);
}
