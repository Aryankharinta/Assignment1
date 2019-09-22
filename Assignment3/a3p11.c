#include<stdio.h>
int main()
{
	int p,q,r;
	printf("Write any three numbers");
	scanf("%d%d%d",&p,&q,&r);

	if(p>q&&p<r||p>r&&p<q)
	printf("%d is middle number",p);
	else if(q>r&&q<p||q>p&&q<r)
	printf("%d is middle number",q);
	else
	printf("%d is middle number",r);
}
