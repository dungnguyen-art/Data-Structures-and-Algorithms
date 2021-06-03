#include <bits/stdc++.h>

using namespace std;
int n, a[100], b[100];
void Init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
}
bool sort_greedy()
{
    sort(b + 1, b + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[n + 1 - i] && a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        if (sort_greedy())
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}