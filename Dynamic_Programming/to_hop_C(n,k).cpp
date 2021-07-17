#include <iostream>
#include <string.h>

using namespace std;
long modul = 1e9 + 7;

long TH[1000][1000];

void init()
{
    memset(TH, 0, sizeof(TH));
}

long to_hop(int n, int k)
{
    if (k == 0 || k == n)
        TH[n][k] = 1;
    else if (k == 1)
        TH[n][k] = n;

    else if (TH[n - 1][k] != 0 && TH[n - 1][k - 1] != 0)
        TH[n][k] = TH[n - 1][k] + TH[n - 1][k - 1];
    else
        TH[n][k] = to_hop(n - 1, k)+ to_hop(n - 1, k - 1);
    return TH[n][k] % modul;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        init();
        cout << to_hop(n, k) << endl;
    }
}