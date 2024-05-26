#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int f = n-2;
    int s = n-1;

    if(f < 0){
        cout << '1' << "\n";
        return 0;
    }
    else{
        unsigned long long res = pow(2,f) * pow(2,s);
        cout << res << "\n";
    }



    return 0;
}
