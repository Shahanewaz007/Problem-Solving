#include<stdio.h>
#include<stdio.h>

void solve(void)
{
    char s[105];

    scanf("%s",s);

    int n = strlen(s);

    for(int i=0; i<n; i++)
    {
        printf("%c",s[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
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
