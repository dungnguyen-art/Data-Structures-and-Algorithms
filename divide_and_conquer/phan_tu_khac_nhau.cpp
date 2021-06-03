#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v1;
        vector<long long> v2;
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int j = 0; j < n - 1; j++)
            cin >> v2[j];
        // bool ok = true;
        for (int k = 0; k < n; k++)
        {
            if (v1[k] != v2[k] && v1[k + 1] == v2[k])
            {
                // ok = false;
                cout << v1[i] << endl;
                break;
            }
        }
    }
}