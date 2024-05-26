#include<stdio.h>

void solve(void)
{
    int n;
    scanf("%d",&n);

    char s[200005];
    scanf("%s",s);
    int ans = 0;
    for(int i=0; i<n-1; i++)
    {
        char a = s[i], b = s[i+1];
        int found = 0;
        for(int j=2; j<n-1; j++)
        {
            if(s[j]==a && s[j+1]==b)
            {
                found = 1;
                break;
            }

        }
        if(found==1)
        {
            ans = 1;
            break;
        }
    }
    if(ans)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

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
