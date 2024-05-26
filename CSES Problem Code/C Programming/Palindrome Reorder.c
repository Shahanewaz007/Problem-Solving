#include<stdio.h>
#include<string.h>

int main()
{
    //AAAACACBA

     char s[1000006];

     scanf("%s",s);

     int  n = strlen(s);

     int ar[28],i;

     for(i=1; i<=26; i++)
     {
         ar[i]=0;
     }

     for(i=0; i<n; i++)
     {
         ar[(s[i]-'A')+1]++;
     }

     int oddValue=0,oddCount=0;
     int totalCharValue=0;
     char oddChar;

     for(i=1; i<=26; i++)
     {
          if(ar[i]!=0)
          {
              totalCharValue++;
          }
         if(ar[i]%2==1)
         {
             oddValue = ar[i];
             oddChar = i + 64;
             ar[i] = 0;
             oddCount++;
         }
     }

     if(oddCount>1)
     {
         printf("NO SOLUTION\n");
         return 0;
     }

     //printf("%d\n",oddValue);
     //printf("%c\n",oddChar);
     int remainChar=n;
     if(oddValue!=0)
     {
         remainChar -= oddValue;
         totalCharValue -= 1;

     }

     char firstHalf[(remainChar/2)+1],lastHalf[(remainChar/2)+1];

     int l=0, r=(remainChar/2)-1;
     int j=1;
     while(j<=totalCharValue)
     {
         int evenValue=-1;
         char evenChar;

         for(i=1; i<=26; i++)
         {
             if(ar[i]>=1)
             {
                 evenValue=ar[i];
                 evenChar = i + 64;
                 ar[i] = 0;
                 break;

             }
         }

         for(i=0; i<evenValue/2; i++)
         {
             firstHalf[l]=evenChar;
             l++;
         }

         for(i=0; i<evenValue/2; i++)
         {
             lastHalf[r]=evenChar;
             r--;
         }
         j++;
     }

     for(i=0; i<remainChar/2; i++)
        printf("%c",firstHalf[i]);
     for(i=0; i<oddValue; i++)
        printf("%c",oddChar);
     for(i=0; i<remainChar/2; i++)
        printf("%c",lastHalf[i]);

    return 0;
}











