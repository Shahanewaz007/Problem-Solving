#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n, k;

        cin >> n >> k;

        map<int,int> mp;

        for(int i=1; i<=n; i++)
        {
            int in;

            cin >> in;

            mp[in] = i;
        }
        int cnt = 0;
        for(auto val : mp)
        {
            int current_pos = val.second;
            int correct_pos = val.first;

            if((abs(correct_pos - current_pos) % k) != 0)
                cnt++;
        }
        if(cnt == 0)
            cout << 0 << endl;
        else if(cnt == 2)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
