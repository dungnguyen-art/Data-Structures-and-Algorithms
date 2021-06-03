#include <iostream>
#include <string>
#include <algorithm>
#include<climits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int i = 0;
        
        while (k--)
        {
            int x = 0;
            int max = INT_MIN;
            for (int t = i; t < s.size(); t++)
            {
                if (s[t] > max)
                {
                    max = s[t];
                    x = t;
                }
            }
            swap(s[i], s[x]);
            i++;
        }
        cout<<s<<endl;
        s.clear();
    }
}