#include <iostream>

using namespace std;
int n, a[100][100];
string s[100];
int dem;
void Init()
{
    cin >> n;
    dem = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Result()
{
    dem++;
    for (int i = 1; i < 2*n-1; i++)
        cout << s[i];
    cout << " ";
}

void Try(int i, int h, int k)
{
    //for (int j = 0; j <= 1; j++)
    //{
    if (h == n && k == n && a[h][k] == 1)
    {
        Result();
    }
    
    if (a[h + 1][k] == 1 && a[h][k] == 1 )
    {
        s[i] = 'D';
        Try(i + 1, h + 1, k);
    }
    
    if (a[h][k + 1] == 1 && a[h][k] == 1)
    {
        s[i] = 'R';
        Try(i + 1, h, k + 1);
    }
    //  }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        Try(1, 1, 1);
        if (dem == 0)
            cout << "-1";
        cout<<endl;
    }
}