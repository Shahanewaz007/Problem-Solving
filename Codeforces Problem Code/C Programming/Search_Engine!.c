#include<stdio.h>

void solve(int c)
{
    int n;

    scanf("%d",&n);

    int ar[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int s;
    scanf("%d",&s);
    int ans = 0;
    int m=0;
    for(int i=1; i<=n; i++)
    {
        if(ar[i]==s)
        {
            m = i;
            ans = 1;
            break;
        }
    }
    if(ans==1)
    {
        printf("Case %d: %d\n",c,m);
    }
    else
        printf("Case %d: Not Found\n",c);

}

int main()
{
    int t;

    scanf("%d",&t);
    int c=1;
    while(t--)
    {
        solve(c);
        c++;
    }

    return 0;
}
