
#include<stdio.h>
#include<string.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    i=0;
    while(i<t)
    {
     int n;

     scanf("%d", &n);

     int j, ar[n+1];

     for(j=0; j<n; j++)
     {
         scanf("%d", &ar[j]);
     }


     for(j=0; j<n; j++)
     {
         int m, k;
         scanf("%d", &m);
         char s[m+1];

         getchar();

         scanf("%s", s);

         for(k=0; k<=strlen(s); k++)
         {
            if(s[k]=='D')
            {
                ar[j] = ar[j] + 1;
                if(ar[j]==-1)
                {
                    ar[j] = 9;
                }
                 else if(ar[j]==10)
                {
                    ar[j] = 0;
                }
            }
            else if(s[k]=='U')
            {
                ar[j] = ar[j] - 1;

                if(ar[j]==-1)
                {
                    ar[j] = 9;
                }
                 else if(ar[j]==10)
                {
                    ar[j] = 0;
                }
            }
         }

         for(k=0; k<=strlen(s); k++)
         {
             s[k] = 0;
         }

     }
    for(j=0; j<n; j++)
     {
         printf("%d ", ar[j]);
     }

     i++;

    }

    return 0;
}
