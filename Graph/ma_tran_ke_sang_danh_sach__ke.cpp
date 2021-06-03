#include <bits/stdc++.h>
#define max 1005
using namespace std;

int a[max][max];

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
                cout<<j<<" ";
        }
        cout << endl;
    }
    return 0;
}