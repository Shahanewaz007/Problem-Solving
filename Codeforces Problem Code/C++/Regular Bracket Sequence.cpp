#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin >> s;

    int ans = 0;

    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        int ch = s[i];

        if(ch == '(')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            if(st.empty())
            {
                st.push(ch);
            }
            else if(ch == ')' && st.top() == '(')
            {
                ans++;
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    cout << ans*2 << "\n";



    return 0;
}
