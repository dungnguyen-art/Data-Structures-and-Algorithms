#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    stack<int> st;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            int n;
            cin >> n;
            st.push(n);
        }
        else if (s == "POP" && st.size()>0)
        {
            st.pop();
        }
        else if (s == "PRINT")
        {
            if (!st.empty())
            {
                cout << st.top();
                cout << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
    return 0;
}