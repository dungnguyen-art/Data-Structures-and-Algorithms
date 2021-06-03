#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long summ = 0;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            pq.push(k);
        }

        while (pq.size() != 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a += b;
            summ += a;
            pq.push(a);
        }
        cout << summ << endl;
    }
    return 0;
}