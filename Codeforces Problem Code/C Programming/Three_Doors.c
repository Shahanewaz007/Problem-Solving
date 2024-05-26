#include<stdio.h>

void solve(void)
{

    int n;
    scanf("%d",&n);

    int ar[4];

    for(int i=1; i<=3; i++)
    {
        scanf("%d",&ar[i]);
    }

    int count=0, flag=1;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(j==n)
            {
                if(ar[j]!=0)
                {
                    n = ar[j];
                    count++;
                }
                flag=0;
            }
        }
    }

    if(count==2)
        printf("YES\n");
    else if(flag==0)
        printf("NO\n");

}

int main()
{
   int n;

   scanf("%d",&n);

   while(n--)
   {
       solve();
   }
    return 0;
}
