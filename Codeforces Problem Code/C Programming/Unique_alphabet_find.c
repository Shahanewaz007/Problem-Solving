#include<stdio.h>

int main()
{

    int n;

    scanf("%d",&n);

    char s[n];

    scanf("%s",s);

    int freq[27];

    for(int i=0; i<27; i++)
    {
        freq[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        freq[(s[i]-'a')+1]++;
    }
    int count=0;
    for(int i=0; i<27; i++)
    {
        if(freq[i]==1)
        {
            count++;
        }
    }

    printf("%d\n",count);


    return 0;
}
