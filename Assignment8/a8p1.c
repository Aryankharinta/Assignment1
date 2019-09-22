#include<stdio.h>
int main()
{
int n,x,i,a,s=0;
printf("given n:");
scanf("%d",&n);
printf("Enter %d numbers ",n);
for(i=1;i<=n;i++)
{
scanf("%d",&x);
a=x%10;
s=s+a;
}
printf("Sum of last digits are %d",s);
}
