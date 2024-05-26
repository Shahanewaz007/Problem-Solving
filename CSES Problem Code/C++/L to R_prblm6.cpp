#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;

    cin >> n;
    set<long long> st;
    for(int i=1; i<=n; i++)
    {
        int in;

        cin >> in;

        if(in == 0)
            st.insert(i);
    }

    int q;

    cin >> q;

    while(q--)
    {
        int l , r;

        cin >> l >> r;

        auto it = st.lower_bound(l);
        if(it != st.end() && r >= *it)
            cout << '0' << '\n';
        else
            cout << '1' << '\n';
    }


    return 0;
}
