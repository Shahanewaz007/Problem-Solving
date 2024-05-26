#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
map<ll,vector<ll>> adj;

vector<ll> ans;
map<ll,bool> visited;
bool found = false;

void cheak(ll node)
{

    queue<ll> q;

    visited[node] = true;
    q.push(node);
    ans.push_back(node);

    while(!q.empty())
    {
        if(ans.size() == n)
        {
            found = true;
            return;
        }

        ll parent = q.front();
        q.pop();

        for(auto child : adj[parent])
        {
            if((parent*2)==child && visited[child] != true)
            {
                q.push(child);
                visited[child] = true;
                ans.push_back(child);
                break;
            }
            else if((parent%3)==0 && (parent/3)==child && visited[child] != true)
            {
                q.push(child);
                visited[child] = true;
                ans.push_back(child);
                break;
            }
        }
    }
}

void init()
{
    ans.clear();
    visited.clear();
}

int main()
{
    cin >> n;

    vector<ll> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i != j)
                adj[v[i]].push_back(v[j]);
        }
    }

//    for(auto val:adj)
//    {
//        cout << val.first << " -> ";
//        for(int node : val.second)
//            cout << node << " ";
//        cout << "\n";
//    }
//
    for(auto node : adj)
    {
        cheak(node.first);
        if(found)
            break;
        init();
    }

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}

