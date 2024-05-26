#include<stdio.h>
#include<string.h>

int main()
{

    char name[1000];

    fgets(name, sizeof(name), stdin);

    if(name[0]>='a' && name[0]<='z')
    {
        name[0] -= 32;

        puts(name);
    }
    else{
        puts(name);
    }

    return 0;
}


