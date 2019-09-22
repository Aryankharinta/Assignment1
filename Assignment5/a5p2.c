#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<10;y++)
	{
		for(x=0;x<20;x++)
			if(((y>2)&&(y<7))||((y<3)&&(x>7))||((y>6)&&(x<15)))
				printf("*");
			else
				printf("O");
		printf("\n");
	}
}
