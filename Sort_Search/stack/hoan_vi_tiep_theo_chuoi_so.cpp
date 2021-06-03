#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dem;
        cin>>dem;
        string s;
        cin >> s;
        int n = s.size();
        int x;
        int kt = 0;
        for (int i = s.size()-1; i > 0; i--)
        {
            if (s[i] > s[i - 1])
            {
                x = i - 1;
                kt = 1;
                break;
                
            }
        }
        if (kt == 1)
        {
            int y;
            for (int i = s.size() - 1; i > x; i--)
            {
                if (s[i] > s[x])
                {
                    y = i;
                    break;
                }
            }
            swap(s[x], s[y]);
            int j = n - 1;
            for (int i = x + 1; i <= (n + x) / 2; i++)
            {
                int tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
                 j--;
            }
            cout<<dem<<" ";
            for (int i = 0; i < n; i++)
                cout << s[i];
        }
        else{
            cout<<dem<<" BIGGEST";
        }
        cout<<endl;
    }
}