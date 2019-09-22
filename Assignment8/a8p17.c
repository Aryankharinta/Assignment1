int main()
{
        int n,x,i,a=0,b,c,s=0;
       
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
                b=a;
		a=x;
                c=a*b;
		s=s+c;
                }
        printf("product is %d",s);
}

