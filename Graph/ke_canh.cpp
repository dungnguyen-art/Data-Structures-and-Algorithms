#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    cin.ignore();
    vector<int> ke[100];
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s += " ";
        int nb = 0;
        int j = 0;
        while (j < s.size())
        {
            if (s[j] >= '0' && s[j] <= '9')
                nb = nb * 10 + (int)(s[j] - '0');
            else if (nb > 0)
            {
                ke[i].push_back(nb);
                nb = 0;
            }
            j++;
        }
    }

    for (int i = 1; i <= n; i++)
        sort(ke[i].begin(), ke[i].end());

    // int check[100][100];
    // memset(check,0,sizeof(check));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            // if (!check[i][ke[i][j]] && !check[ke[i][j]][i])
            //     cout <<i <<" "<< ke[i][j] << "\n";
            // check[i][ke[i][j]] = check[ke[i][j]][i] = 1;
            if (ke[i][j] > i)
            {
                cout << i << " " << ke[i][j] << endl;
            }
        }
        // cout << endl;
    }
    return 0;
}