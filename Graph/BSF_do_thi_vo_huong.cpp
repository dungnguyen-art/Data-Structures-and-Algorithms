#include <bits/stdc++.h>
using namespace std;

bool check[10000];
vector<int> ke[10000];

void BFS(int k)
{
    // cout << k << " ";

    queue<int> q;
    q.push(k);
    while (!q.empty())
    {
        int s = q.front();
        cout<<s<<" ";
        q.pop();
        check[s]=false;
        for (int i = 0; i < ke[s].size(); i++)
        {
            if (check[ke[s][i]])
            {
                // BFS(ke[u][i]);
                check[ke[s][i]] = false;
                q.push(ke[s][i]);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        memset(check, true, sizeof(check));
        cin >> v >> e >> u;
        for (int i = 1; i <= 1001; i++)
            ke[i].clear();

        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(u);
        cout<<endl;
    }
}