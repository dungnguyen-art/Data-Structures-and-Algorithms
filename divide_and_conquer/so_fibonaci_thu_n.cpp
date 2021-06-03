#include <bits/stdc++.h>
#define p 1000000007
using namespace std;

long long fib(long long n)
{
    long long a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = (a % p + b % p) % p;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        cout << fib(n)<<endl;
    }
    return 0;
}