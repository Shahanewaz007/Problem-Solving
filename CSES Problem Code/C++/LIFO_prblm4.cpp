#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int sz = s.size();

    stack<int> st;

    for(int i=0; i<s.size(); i++)
    {
        char ch = s[i];
        if(st.size()==0)
        {
            st.push(ch);
        }
        else if(ch == '{'){

            st.push(ch);
        }
        else if(ch == '}' && st.top() == '{')
            {
                st.pop();
            }
        else{
            st.push(ch);
        }
    }

    if(st.empty())
    {
        cout << sz << "\n";
    }
    else
        cout << '0' << "\n";


    return 0;
}
