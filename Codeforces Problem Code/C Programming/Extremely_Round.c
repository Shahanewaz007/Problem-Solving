#include<stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n);

    if(n<=9)
        printf("%d\n",n);
    else{
        int res=9,value=10,count=1;
        for(int i=10; i<=n; i+=value)
        {
            if(count==10)
            {
                value *= 10;
                count = 1;
            }
            res++;
            count++;
        }
        printf("%d\n",res);
    }

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
