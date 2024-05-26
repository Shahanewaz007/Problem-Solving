#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {

    int n, maxn=101;

    scanf("%d", &n);

    int ar[n+1], i;

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int detect[maxn];

    for(i=1; i<=maxn; i++)
    {
        detect[i] = 0;
    }

    for(i=1; i<=n; i++)
    {
        detect[ar[i]] += 1;
    }
    int ans;
    for(i=1; i<=n; i++)
    {
        if(detect[ar[i]]==1)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    }


    return 0;
}
