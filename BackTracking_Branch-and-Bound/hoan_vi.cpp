#include <iostream>

using namespace std;

int n, a[100];
int chuaxet[100];
void Init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
        chuaxet[i] = true;
    }
}

void Result()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (chuaxet[j])
        {
            a[i] = j;
            chuaxet[j] = false;
            if (i == n)
                Result();
            else
                Try(i + 1);
            chuaxet[j] = true;
        }
    }
}
    int main()
    {
        Init();
        Try(1);
    }