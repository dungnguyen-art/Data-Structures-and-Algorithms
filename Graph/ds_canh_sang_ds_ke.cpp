#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10000], b[10000];
        int v, e;
        cin >> v >> e;
        for(int i=1;i<=e;i++)
            cin>>a[i]>>b[i];

        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (int j = 1; j <= e; j++)
            {
                if (a[j] == i)
                    cout << b[j] << " ";
                else if(b[j]==i)
                    cout<<a[j]<<" ";
            }
            cout << endl;
        }
    }
    cout << endl;
}