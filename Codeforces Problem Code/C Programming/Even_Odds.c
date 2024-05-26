#include<stdio.h>
int main()
{

    long long int n, k;
    long long int s=0;

    scanf("%lld %lld", &n, &k);

    if(n%2==0)
    {
        n = n/2;
        if(n>=k){
            s = (k*2)-1;
        }
        else{
            s = (k-n)*2;
        }
    }
    else
    {
     n = (n/2)+1;

     if(n>=k){
            s = (k*2)-1;
        }
        else{
            s = (k-n)*2;
        }


    }


    printf("%lld", s);


    return 0;
}

