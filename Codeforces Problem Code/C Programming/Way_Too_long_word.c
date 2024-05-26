#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, j, count=0;

    printf("How many character you want : ");
    scanf("%d",&n);

    char name[n][100];

    for(i=0; i<=n; i++)
    {

        gets(name[i]);

    }

    for(i=0; i<=n;i++)
    {
        if(name[i]>10)
        {
            for(j=name[0]; j<name['\0']; j++){
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
