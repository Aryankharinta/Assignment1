
#include<stdio.h>
int main()
{
        int x,y;
        for(y=1;y<=9;y++)
        {
                for(x=1;x<=20;x++)

                {
                        if((y<=3)||((y>3)&&(((x+y)<=9)||(x>=(8+(y-4))))))

                        
                                printf("*");
                  else
                        printf("0");
		}
		printf("\n");
	}
}

    