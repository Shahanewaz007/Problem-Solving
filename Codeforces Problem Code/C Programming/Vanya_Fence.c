int main()
{
    int n, h, i;
    int a[1000];
    int sum=0, sum1=0, sum2=0;

    scanf("%d %d", &n, &h);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]>h){
        sum += 2;

       }
       else{
        sum += 1;
       }
    }

    //sum = sum1 + sum2;

    printf("%d", sum);




    return 0;
}

