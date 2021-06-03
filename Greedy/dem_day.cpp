#include <bits/stdc++.h>
#define p 123456789

using namespace std;
long long Power(int a, long long b)
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
        long long n;
        cin >> n;
        n--;
        cout << Power(2, n)<<endl;
    }
}