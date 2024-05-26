#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    char ar[n];

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    int cunt = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == ar[i-1])
        {
            cunt++;
        }
    }

    cout << cunt << "\n";

    return 0;
}
