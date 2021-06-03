#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int l = n;
        while (l > 0 && a[l] < a[l - 1])
        {
            l--;
        }
        if (l > 0)
        {
            l--;
            swap(a[l], a[n]);
            int j = n;
            for (int i = l + 1; i <= (n - l - 1) / 2; i++)
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                j--;
            }
        }
        else{
            for(int i=1;i<=n;i++)
                a[i] = i;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}