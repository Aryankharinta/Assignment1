#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y<10;y++)
	{
		for(x=0;x<20;x++)
			if((x+y>6&&x<11&&y<7)||(y==7&&x<11)||(y>=8))
					printf("*");
					else
					printf("O");
					printf("\n");
						}
					      }
