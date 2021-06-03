#include <iostream>
int n, a[105], marked[105], sum;
bool check;
using namespace std;

void Init()
{
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        marked[i] = 1;
        sum += a[i];
    }
    check = true;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        marked[i] = j;
        if (i == n)
        {
            int sumTmp = 0;
            for (int t = 1; t <= n; t++)
            {
                sumTmp += a[t] * marked[t];
            }
            if (sum / 2 == sumTmp)
            {
                check = false;
            }
        }
        else
            Try(i + 1);
        if(check == false)
            break;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        if (sum % 2 == 1)
            cout << "NO";
        else
        {
            Try(1);
            if (!check)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}