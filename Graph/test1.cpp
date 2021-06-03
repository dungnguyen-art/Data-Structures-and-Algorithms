#include <bits/stdc++.h>
#define mod  1e9 + 7
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long res = 1;
        
        for (int i = 0; i < k; i++)
        {
            res = res * (n-i);
            res %= mod;
        }
        cout << res;
    }
}