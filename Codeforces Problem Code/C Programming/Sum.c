#include<stdio.h>
#include<string.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for(i=1;i<=t; i++)
    {

   int a, b, c;

   scanf("%d %d %d",&a, &b, &c);

   if(a+b==c || b+c==a || a+c==b)
   {
       printf("Yes\n");
   }

   else{
    printf("NO\n");
   }

    }



    return 0;
}






