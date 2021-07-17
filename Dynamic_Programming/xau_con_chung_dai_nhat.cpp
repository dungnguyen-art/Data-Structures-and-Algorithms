#include <bits/stdc++.h>

using namespace std;
void Sub_String(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int d[n + 1][m + 1];
    // memset(d, 0, sizeof(d));
    // int res = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                d[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
                d[i][j] = d[i - 1][j - 1] + 1;
            else
                d[i][j] = max(d[i - 1][j], d[i][j - 1]);
        }
    }
    cout << d[n][m] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        Sub_String(a, b);
    }
}