#include <iostream>

using namespace std;

int n, chuaxet[100], xuoi[100], nguoc[100];
int dem, a[100];
void Init()
{
    cin >> n;
    dem = 0;
    for (int i = 1; i <= n; i++)
        chuaxet[i] = true;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        xuoi[i] = true;
        nguoc[i] = true;
    }
}
// void Result()
// {
//     // cout << dem++ << endl;
//     // for (int i = 1; i <= n; i++)
//     //     cout << a[i] << " ";
//     // cout << endl;
//     dem++;
//     //return dem;
// }
int Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (chuaxet[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            a[i] = j;
            chuaxet[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == n)
                dem++;
            else
                Try(i + 1);
            chuaxet[j] = true;
            nguoc[i + j - 1] = true;
            xuoi[i - j + n] = true;
        }
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        Try(1);
        cout << dem << endl;
    }
}