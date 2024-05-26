#include<stdio.h>

int main()
{
    int t;

    scanf("%d",&t);

    for(int k=1; k<=t; k++)
    {
        int l,r;

        scanf("%d %d",&l,&r);

        for(int i=l; i<=r; i++)
        {
            int prime=1;
            for(int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }


    return 0;
}
