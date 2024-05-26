#include<stdio.h>

int main()
{
    long long int n;
    long long int ar[10000];
    long long int i,x;

    scanf("%lld", &n);

    for(i=1; i<n; i++)
    {
        scanf("%lld", &x);
        ar[x]=1;

    }

    for(i=1; i<=n; i++)
    {
       if(ar[i]==0)
       {
           printf("%lld",i);
           break;
       }
    }

    return 0;
}
