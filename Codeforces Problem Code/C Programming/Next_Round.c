#include<stdio.h>

int main()
{
    int n, k, i;

    scanf("%d %d", &n, &k);
    int ar[60];

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ans=0;
    for(i=1; i<=n; i++)
    {
        if(ar[i]>=ar[k] && ar[i]>0)
        {
            ans++;
        }
    }

    printf("%d\n", ans);


    return 0;
}
