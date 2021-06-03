#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string res = "";
        res = s[0] + res;
        for (int i = 1; i < s.size(); i++)
        {
            int tmp = s[i] ^ s[i - 1];
            res += to_string(tmp);
        }
        cout << res<<endl;
    }
}