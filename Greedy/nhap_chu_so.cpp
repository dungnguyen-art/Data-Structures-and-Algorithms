#include <bits/stdc++.h>
#include <sstream>
using namespace std;

void convert5to6(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
    }
    stringstream a1(a);
    long long x = 0;
    a1 >> x;
    stringstream b2(b);
    long long x1 = 0;
    b2 >> x1;
    long long res = x + x1;
    cout << res;
}
void convert6to5(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
    }

    for (int i = 0; i < b.size(); i++)
        if (b[i] == '6')
            b[i] = '5';
    stringstream a1(a);
    long long x = 0;
    a1 >> x;
    stringstream b2(b);
    long long x1 = 0;
    b2 >> x1;
    long long res = x + x1;
    cout << res;
}

int main()
{
    string a, b;
    cin >> a >> b;
    convert6to5(a, b);
    cout << " ";
    convert5to6(a, b);
}