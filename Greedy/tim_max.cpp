#include <bits/stdc++.h>
#define p 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long res = 0;
        vector<long long> myvec;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            myvec.push_back(x);
        }
        sort(myvec.begin(), myvec.end());
        for (int i = 0; i < n; i++)
        {
            res += myvec[i] * i;
            if (res > p)
                res %= p;
        }
        cout << res << endl;
    }
}