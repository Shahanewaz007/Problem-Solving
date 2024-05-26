#include<stdio.h>
#include<string.h>

int main()
{



     int n, i;
     char name[1000];

     scanf("%d", &n);

     for(i=1;i<=n; i++)
     {

     scanf("%s",name);
     int len = strlen(name);

     if(len>10)
     {
         printf("%c%d%c\n", name[0], len-2, name[len-1]);
     }
     else{
        puts(name);
     }

     }



    return 0;
}

