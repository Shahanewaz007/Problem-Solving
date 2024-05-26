#include<stdio.h>

int main()
{
    int ar[120];
    int n, e_c=0, o_c=0, i, ans;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(ar[i]%2==0)
        {
            e_c++;
        }
        else
        {
            o_c++;
        }
    }

    if(e_c==1)
    {
        for(i=1; i<=n; i++)
        {
            if(ar[i]%2==0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(ar[i]%2==1)
            {
                ans = i;
            }
        }
    }

    printf("%d", ans);




    return 0;
}
