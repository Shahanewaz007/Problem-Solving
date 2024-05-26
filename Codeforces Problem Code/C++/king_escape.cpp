#include <bits/stdc++.h>
using namespace std;

bool visited[1005][1005];
int n;

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

bool isSafe(int x, int y, int ax, int ay)
{
    if (x < 1 || x > n || y < 1 | y > n)
        return true;
    if (x == ax || y == ay || abs(x - ax) == abs(y - ay))
        return true;
    if (visited[x][y])
        return true;
    return false;
}

void bfs(int ax, int ay, int bx, int by)
{
    queue<pair<int, int>> q;
    q.push({bx, by});
    visited[bx][by] = true;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];

            if(isSafe(x, y, ax, ay)) continue;

            visited[x][y] = true;
            q.push({x, y});
        }
    }
}

int main()
{
    cin >> n;

    int ax, ay, bx, by, cx, cy;

    cin >> ax >> ay >> bx >> by >> cx >> cy;

    bfs(ax, ay, bx, by);

    if (visited[cx][cy])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

DFS:

#include <bits/stdc++.h>
using namespace std;


bool visited[1005][1005];
int n;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

bool isSafe(int x, int y, int ax, int ay)
{
    if (x < 0 || y < 0 || x >= n || y >= n || visited[x][y])
        return false;
    if ((x == ax) || (y == ay))
        return false;
    if (x + y == ax + ay)
        return false;
    if ((x - ax) == (y - ay))
        return false;

    return true;
}

void dfs(int x, int y, int ax, int ay)
{
    visited[x][y] = true;

    for (int i = 0; i < 8; i++)
    {
        if (isSafe(x + dx[i], y + dy[i], ax, ay))
        {
            dfs(x + dx[i], y + dy[i], ax, ay);
        }
    }
}

int main()
{
    cin >> n;

    int ax, ay, bx, by, cx, cy;

    cin >> ax >> ay >> bx >> by >> cx >> cy;

    ax--; ay--;
    bx--;  by--;
    cx--;  cy--;

    dfs(bx, by, ax, ay);

    if (visited[cx][cy])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
