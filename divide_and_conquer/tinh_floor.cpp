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
        vector<long long> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        if (v1[0] > k)
        {
            cout << "-1";
        }
        else
        {
            vector<long long>::iterator it, low;
            it = find(v1.begin(), v1.end(), k);
            if (it != v1.end())
                cout <<(it - v1.begin()+1);
            else
            {
                low = lower_bound(v1.begin(), v1.end(), k);
                cout << (low - v1.begin());
            }
        }
        cout<<endl;
        v1.clear();
    }
}