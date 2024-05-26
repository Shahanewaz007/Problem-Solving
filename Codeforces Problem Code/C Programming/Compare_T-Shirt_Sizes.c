#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    int i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

    char s1[60];
    char s2[60];

    scanf("%s",s1);
    scanf("%s",s2);

    int sz1=strlen(s1);
    int sz2=strlen(s2);

    char ch1, ch2;

    ch1=s1[sz1-1];
    ch2=s2[sz2-1];

    if(ch1==ch2)
    {
        if(ch1=='S')
        {
            if(sz1>sz2)
                printf("<\n");
            else if(sz1<sz2)
                printf(">\n");
            else
                printf("=\n");
        }

        else{
            if(sz1>sz2)
                printf(">\n");
            else if(sz1<sz2)
                printf("<\n");
            else
                printf("=\n");
        }

    }

    else{
        if((ch1=='L'&&ch2=='M')||(ch1=='L'&&ch2=='S')||(ch1=='M'&&ch2=='S'))
        {
            printf(">\n");
        }
        else{
            printf("<\n");
        }
    }


    }


    return 0;
}
