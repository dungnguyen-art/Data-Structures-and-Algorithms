#include <bits/stdc++.h>
#define p 123456789
using namespace std;
long long pow(long long n)
{
    if (n == 1)
        return 1;
    if (n > 1)
        return (pow(n - 1)%p + pow(n - 1)%p)%p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << pow(n) << endl;
    }
    return 0;
}