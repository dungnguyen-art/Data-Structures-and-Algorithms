#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n, k, a[100], mark[100];
bool check = true;
int res;
int countTmp,sum;
void Init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mark[i] = 1;
    }
    // found = 0;
    check = true;
    // countTmp = 0;
    sort(a + 1, a + 1 + n);
    res = INT_MAX;
    sum = 0;
}

void Try(int i)
{
    for (int j = 1; j >= 0; j--)
    {
        mark[i] = j;
        sum += a[i] * mark[i];
        if (i == n)
        {
            // int sum = 0;
            // for (int t = 1; t <= n; t++)
            //     sum += a[t] * mark[t];

            // int res = INT_MAX;
            if (sum == k)
            {
                check = false;
                // int tmp = 1;
                countTmp = 0;
                
                for (int h = 1; h <= n; h++)
                {
                    if (mark[h])
                    {
                        countTmp++;
                    }
                    // found = 1;
                }
                 if(countTmp < res)
                        res = countTmp;
                
            }
        }
        else if( sum <= k)
            Try(i + 1);
        // if(found == 1)
        //     break;
        sum -= a[i]*mark[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        Try(1);
        if (!check)
            cout << res;
        else
            cout << "-1";
        cout << endl;
    }
}