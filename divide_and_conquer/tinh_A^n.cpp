#include <bits/stdc++.h>

#define p 1000000007

using namespace std;
long long Power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        return (Power(a, b / 2) % p) * (Power(a, b / 2) % p) % p;
    }
    else
        return (a % p * Power(a, b / 2) % p * Power(a, b / 2) % p) % p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> a >> n;
        cout << Power(a, n)<<endl;
    }
}