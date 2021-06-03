#include <bits/stdc++.h>

using namespace std;
vector<long long> v1, v2;
long long n, m, k;

void Init()
{
    cin >> n >> m >> k;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v1.push_back(x);
    }
    for (long long i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        v2.push_back(x);
    }
    v1.insert(v1.end(), v2.begin(), v2.end());
}
void search()
{
    sort(v1.begin(), v1.end());
    for(int i=1;i<=v1.size();i++)
    // cout << v1[k - 1] << endl;
        cout<<v1[i-1]<<" ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        search();
    }
}