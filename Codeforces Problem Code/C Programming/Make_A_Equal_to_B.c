#include<stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n);

    int a[n+1],b[n+1];
    int z1=0,z2=0,o1=0,o2=0;
    for(int i=1; i<=n; i++)
    {
        int in;
        scanf("%d",&in);
        a[i] = in;
        if(in==1)
            z1++;
        else
            o1++;
    }

    for(int i=1; i<=n; i++)
    {
        int in;
        scanf("%d",&in);
        b[i] = in;
        if(in==1)
            z2++;
        else
            o2++;
    }

    int ans = max(z1-z2,o1-o2);

   int res = ans;

   for(int i=1; i<=n; i++)
   {
       if(a[i]!=b[i])
        res--;
   }

   if(res<0)
    printf("%d\n",ans+1);
   else
    printf("%d\n",ans);
}

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
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

