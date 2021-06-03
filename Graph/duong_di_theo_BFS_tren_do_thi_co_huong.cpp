#include <bits/stdc++.h>

using namespace std;
vector<int> ke[10000];
bool chuaxet[10000];
int truoc[10000];
int v, e, nguon, dich;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        chuaxet[s] = false;
        for (int i = 0; i < ke[s].size(); i++)
        {
            if (chuaxet[ke[s][i]])
            {
                q.push(ke[s][i]);
                chuaxet[ke[s][i]] = false;
                truoc[ke[s][i]] = s;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> nguon >> dich;
        for (int i = 0; i < 1001; i++)
            ke[i].clear();

        memset(chuaxet, true, sizeof(chuaxet));
        memset(truoc, 0, sizeof(truoc));
        int x, y;
        for (int i = 1; i <= e; i++)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            // ke[y].push_back(x);
        }
        BFS(nguon);
        bool ok = true;
        int b[10000]={0},k = 0;
        int j = dich;
		while (truoc[j] != nguon)
		{
			b[k] = truoc[j];
			k++;
			j = truoc[j];
			if (j == 0)
			{
				ok = false;
				break;
			}
		}
		if (ok)
		{
			b[k] = nguon;
			k++;
			for (int i = k - 1; i >= 0; i--)
				cout << b[i] << " ";
			cout << dich << endl;
		}
		else
			cout << "-1" << endl;
        
    }
}