#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        long long stmp = 0;
        int j;
        if (k < (float)n / 2)
        {
            j = 0;
            while (k--)
            {
                stmp += a[j];
                j++;
            }
        }
        else
        {
            j = n - 1;
            while (k--)
            {
                stmp += a[j];
                j--;
            }
        }

        long long res = abs(sum - 2 * stmp);
        cout << res << endl;
    }
}