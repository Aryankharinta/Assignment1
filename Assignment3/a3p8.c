#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Write the three numbers in which of them 2 is same");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b)
		printf("The different number is %d",c);
	else if(b==c)
	printf("The different number is %d",a);
	else
	printf("The different number is %d",b);
}
