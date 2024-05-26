#include<bits/stdc++.h>

using namespace std;
const int N = 1e9 + 7;
const int maxN = 1005;
int dp[maxN][maxN];

int grid_paths(vector<vector<char>> &grid,int n, int m)
{
    //handle base case
    if(grid[n][m] == '*')
        return 0;

    if(n==0 and m==0)
        return 1;

    // if result is already calculated than return it

    if(dp[n][m] != -1)
        return dp[n][m];

    // calculate result from the sub problems
    int ans = 0;

    if(n > 0) ans += grid_paths(grid,n-1, m);
    if(m > 0) ans += grid_paths(grid, n, m-1);

    ans %= N;
    dp[n][m] = ans;

    return ans;
}

int main()
{
    int n;

    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
           cin >> grid[i][j];
        }
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
           dp[i][j] = -1;

    cout << grid_paths(grid, n-1,n-1) << endl;
    return 0;
}


