#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    priority_queue<int> v;
    while(n--)
    {
        int q, l;

        cin >> q;
        if(q==1)
        {
            cin>>l;
            v.push(l);
        }
        else if(q == 2)
        {
            int mx = v.top();
            cout<< mx << "\n";
            v.pop();
        }
    }

    return 0;
}
