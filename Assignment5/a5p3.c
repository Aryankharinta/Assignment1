#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<4;y++)
	{
		for(x=0;x<10;x++)
			if(((y%2==0)&&(x%2==1))||((y%2==1)&&(x%2==0)))
				printf("*");
			else
				printf("O");
		printf("\n");
	}
}
