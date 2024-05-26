#include<stdio.h>

int main()
{
    long long int n;
    int k, i;


    scanf("%lld", &n);
    scanf("%d", &k);


    for(i=0; i<k; i++)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
            n = n-1;
        }
    }

    printf("%lld\n", n);

    return 0;
}
