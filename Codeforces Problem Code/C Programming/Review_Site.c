#include<stdio.h>

int main()
{
    long long int t, i,j, n;
    int x, count;

    scanf("%lld", &t);

    long long int ar[t];

    for(i=1; i<=t; i++)
    {

        count = 0;
        scanf("%lld", &n);

        for(j=1; j<=n; j++)
        {
            scanf("%d", &x);

            if(x==1)
            {
                count++;
            }
            else if(x==3)
            {
                count++;
            }
        }

        ar[i] = count;


    }

    for(i=1; i<=t; i++)
    {
        printf("%lld\n", ar[i]);
    }


    return 0;
}
