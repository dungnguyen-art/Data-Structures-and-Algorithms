#include <bits/stdc++.h>
using namespace std;
bool chuaxet[1001];
int a[1001][1001], n,m;

void reInit()
{
    for (int i = 1; i <= n; i++)
        chuaxet[i] = true;
}

void dfs(int u)
{
    chuaxet[u] = false;
    for (int i = 1; i <= n; i++)
        if (chuaxet[i] && a[u][i] == 1)
            dfs(i);
}
void duyet_cau()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                a[i][j] = 0;
                a[j][i] = 0;
                dfs(1);
                for (int k = 1; k <= n; k++)
                {
                    if (chuaxet[k])
                    {
                        cout << i << " " << j << endl;
                        break;
                    }
                }
            }
            a[i][j] = 1;
            a[j][i] = 1;
            reInit();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string s;
        cin >> n >> m;
        cin.ignore();
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                a[i][j] = 0;

        for (int i = 1; i <= n; i++)
        {
            getline(cin, s);
            s += " ";
            int nb = 0;
            int j = 0;
            while (j < s.size())
            {
                if (s[j] >= '0' && s[j] <= '9')
                {
                    nb = nb * 10 + (int)(s[j] - '0');
                    // cout<<nb<<" ";
                }
                else if (nb > 0)
                {
                    a[i][nb] = 1;
                    nb = 0;
                }
                j++;
            }
        }
        duyet_cau();
    }
}