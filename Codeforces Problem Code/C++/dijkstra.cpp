#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 1e5 +5;
vector<ll> d(N);
vector<pair<int,int>> adj_list[N];

const ll inf = 9e18;

bool visited[N];

int n, m;
int parent[N];

void dijkstra(int src)
{
    for(int i=1; i<=n; i++)
    {
        d[i] = inf;
    }
    parent[src] = -1;
    d[src] = 1;

    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> > pq;

    pq.push({0,src});

    while(!pq.empty())
    {
        int head = pq.top().second;
        ll cost = pq.top().first;
        pq.pop();

        if(visited[head])
            continue;

        visited[head] = true;

        for(auto adj_info : adj_list[head])
        {
            int adj_node = adj_info.first;
            ll adj_cost = adj_info.second;

            if((cost + adj_cost) < d[adj_node])
            {
                d[adj_node] = cost + adj_cost;
                parent[adj_node] = head;
                pq.push({d[adj_node],adj_node});
            }
        }

    }


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int u, v, w;

        cin >> u >> v >> w;

        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    int src = 1;

    dijkstra(src);
//    cout << d.size() << " " << n << "\n";
//    for(int i=2; i<=n; i++)
//    {
//        cout << d[i] << " ";
//    }
//    cout << "\n";

     if(visited[n])
     {
         int selected_node = n;

         vector<int> path;
         path.push_back(selected_node);
         while(true)
         {
             selected_node = parent[selected_node];
             if(selected_node == -1)
                break;
             path.push_back(selected_node);
         }

         reverse(path.begin(),path.end());
         for(int i=0; i<path.size(); i++)
         {
             cout << path[i] << " ";
         }
         cout << "\n";
     }
     else
        cout << "-1\n";
    return 0;
}

