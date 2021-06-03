#include <iostream>
#define max 100

using namespace std;
int n, m, a[max][max];

// void Init()
// {
//     int a[max][max];
//     int m, n;
//     cin >> m >> n;
//     for (int i = 1; i <= m; i++)
//         for (int j = 1; j <= n; j++)
//             cin >> a[i][j];
// }
int res(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return res(m - 1, n) + res(m, n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[max][max];
        int m, n;
        cin >> m >> n;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        cout << res(m, n) << endl;
    }
}