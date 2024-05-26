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

        vector<int> ar;

        for(int i=1; i<=n; i++)
            ar.push_back(1);

        int positive=n, negative=0, total=0;

        for(int i=0; i<n; i++)
        {
            total = (positive * (positive-1)/2) + (negative * (negative-1) /2);

            if(total == k)
                break;

            ar[i] *= -1;
            positive--;
            negative++;
        }

        if(total == k)
        {
            cout << "YES" << endl;
            for(auto val : ar)
                cout << val << " ";
            cout << "\n";
        }
        else
            cout << "NO" << endl;

    }

    return 0;
}
