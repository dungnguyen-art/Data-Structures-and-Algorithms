#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        vector<string> v(s1.size()+s2.size());

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        vector<string>::iterator it;///dùng như con trỏ.
        it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());///STL giao của hai tập hợp
        
        v.resize(it - v.begin());//loại bỏ vị trí rỗng.
        cout << v.size() << endl;
    }
    return 0;
}