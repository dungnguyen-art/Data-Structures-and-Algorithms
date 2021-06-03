//chap k cua n
#include <iostream>

using namespace std;

int n, k, a[100];

void Init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout<<"[";
    for(int i=1;i<n;i++)
        cout<<a[i]<<" ";
    cout<<a[n];
    cout<<"]";
    cout<<endl;
}
// void result()
// {
//     for (int i = 1; i <= n; i++)
//         cout << a[i];
//     n--;
//     cout << endl;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Init();
        while (n > 1)
        {
            cout << "[";
            for (int i = 1; i < n-1; i++)
            {
                a[i] = a[i] + a[i + 1];
                cout << a[i] << " ";
            }
            a[n-1] = a[n-1] + a[n];
            cout << a[n-1];
            cout << "]";
            cout << endl;
            n--;
        }
    }
}