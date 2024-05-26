#include<stdio.h>

int main()
{
    int ar[5][5];
    int i,j,x,y;

    for(i=0; i<5; i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d", &ar[i][j]);

            if(ar[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }

    int ans, row_c, col_c;

    if(x>2)
      row_c = (x-2);
    else
      row_c = 2-x;
    if(y>2)
      col_c = (y-2);
    else
      col_c = 2-y;

      ans = row_c + col_c;

      printf("%d", ans);

    return 0;
}


