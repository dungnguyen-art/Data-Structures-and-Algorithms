#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> vec;
        queue<string> q;
        q.push("9");
        for (int i = 1000; i >= 0; i--)
        {
            string s1 = q.front();
            if(stoi(s1)%n == 0){
                cout << s1 << endl;
                break;
            }
            q.pop();
            vec.push_back(s1);
            string s2 = s1;
            q.push(s1.append("0"));
            q.push(s2.append("9"));
        }
        // for (int i = 0; i < 10000; i++)
        // {
        //     if (stoi(vec[i]) % n == 0)
        //     {
        //         cout << vec[i] << endl;
        //         break;
        //     }
        // }
    }
}