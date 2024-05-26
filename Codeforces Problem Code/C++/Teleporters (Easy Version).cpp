#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n, c;

        cin >> n >> c;

        list<long> q;

        for(int i=1; i<=n; i++)
        {
            int in;
            cin >> in;

            q.push_back(i + in);
        }

        q.sort();

        int ans = 0;

        while(!q.empty() && c >= 1)
        {
            if((c - q.front() < 0))
                break;
            c -= q.front();
            q.pop_front();
            ans++;
        }

        cout << ans << '\n';

    }


    return 0;
}
