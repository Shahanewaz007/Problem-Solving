#include<stdio.h>
#include<string.h>

int main()
{
    char s[102], s2[102];

    int i;

    fgets(s, sizeof(s), stdin);
    fgets(s2, sizeof(s2), stdin);

    int n = strlen(s)-1;

    for(i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] += 32;
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i] += 32;
    }

    for(i=0; i<n; i++)
    {
        if(s[i]<s2[i])
        {
            printf("\n%s", s2);
            return 0;
        }
        else if(s2[i]<s[i])
        {
           printf("\n%s", s);
            return 0;
        }
    }

    printf("Two word are equal.");


    return 0;
}




