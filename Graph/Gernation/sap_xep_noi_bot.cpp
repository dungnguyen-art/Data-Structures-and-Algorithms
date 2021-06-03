#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int kt;
    int k = 1;
    for (int i = 0; i < n-1; i++)
    {
        kt = 0;
        for (int j = 0; j<n-i-1; j++)
        {
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                kt = 1;
            }
        }
        if(kt == 1){
        cout << "Buoc " << k << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        k++;
      
        cout<<endl;
        }
    }
    return 0;
}
