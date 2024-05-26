#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, m, n, total;

    cin >> n >> m >> a;

    double height,width;

    height = ceil((double)n/(double)a);
    width = ceil((double)m/(double)a);
    total = height*width;
    cout << total << "\n";




    return 0;
}
