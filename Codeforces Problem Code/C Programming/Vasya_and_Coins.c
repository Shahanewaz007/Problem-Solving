#include<stdio.h>

int main()
{
    int t,i;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {

    long long int a, b,ans=0;

    scanf("%lld %lld",&a, &b);

    if(a==0)
    {
        printf("1\n");
    }
    else if(a>0 && b>0)
    {
        ans = (a + (b*2))+1;
        printf("%lld\n",ans);
    }

    else if(a>0)
    {
        printf("%lld\n",a+1);
    }

    }


    return ;
}
