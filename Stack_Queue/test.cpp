#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int size = s.size();
        if (size % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {

                if (s[i] == '{')
                {
                    st.push('{');
                }
                else if (s[i] == '}' && !st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    st.push('}');
                }
            }
            int n = 0, m = 0;
            while (!st.empty() && st.top() == '{')
            {
                n++;
                st.pop();
            }
            m = st.size();
            cout << ((n + m) / 2 + n % 2) << endl;
        }
    }
    return 0;
}