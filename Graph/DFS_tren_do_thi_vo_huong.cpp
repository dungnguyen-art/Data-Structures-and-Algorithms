#include <bits/stdc++.h>

using namespace std;
int v, e, nguon;
vector<int> ke[10000];
bool chuaxet[10000];

void DFS(int u)
{
    cout << u << " ";
    chuaxet[u] = false;
    for (int i = 0; i < ke[u].size(); i++)
        if (chuaxet[ke[u][i]])
            DFS(ke[u][i]);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        for(int i=0;i<1001;i++)
            ke[i].clear();
        memset(chuaxet, true, sizeof(chuaxet));

        // int v,e,u;
        cin >> v >> e >> nguon;
        // vector<int>ke[n+1];
        int x, y;
        for (int i = 1; i <= e; i++)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(nguon);
        cout << endl;
    }
}