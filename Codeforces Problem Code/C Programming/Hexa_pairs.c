#include<stdio.h>

int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp;
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

void solve(void)
{
    int n;

    scanf("%d",&n);

    int ar[n+1];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int count=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
                continue;

            int ans = gcd(ar[i],ar[j]);

            if(ans==1)
            {
                count++;
            }
        }
    }

    printf("%d\n",count);
}

int main()
{

    int t;

    scanf("%d",&t);

    while(t--)
    {
        solve();
    }

    return 0;
}
