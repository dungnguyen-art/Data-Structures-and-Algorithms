#include <bits/stdc++.h>

using namespace std;

int search(int a[], int l, int r, int q)
{
    if (q < a[l] || q > a[r])
        return -1;

    if (a[l] == q)
        return 1;
    else
    {
        int m = a[(l + r) / 2];
        if (q <= m)
            search(a, l, m, q);
        else
            search(a, m + 1, r, q);
    }
    return 1;
}

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    cout << search(a, 0, n - 1, q);
}