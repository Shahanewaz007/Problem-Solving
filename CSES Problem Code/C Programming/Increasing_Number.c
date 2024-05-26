#include<stdio.h>

int main()
{
    long long int ar[10000000];
    long long int n, i, moves=0;


    scanf("%lld", &n);

    for(i=0; i<n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    for(i=1; i<n; i++)
    {
        if(ar[i]<ar[i-1])
        {
            moves += (ar[i-1]-ar[i]);
            ar[i] = ar[i-1];
        }
    }

    printf("%lld\n", moves);


    return 0;
}
