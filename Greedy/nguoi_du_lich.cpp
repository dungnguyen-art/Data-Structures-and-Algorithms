#include <bits/stdc++.h>
//six weeks
using namespace std;
int n, a[100][100];
int used[100] = {0};
int b;
int x[100];
void Init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
}
void Greedy()
{
    x[0] = 1;
    i = 0;
    used[0] = 1;
    while(i<n){
        i++;
        b = INT_MAX;
        for(int j=1;j<n;j++){
            if(used[j] == 0 && c[x[j-1],j] < b){
                b = c[x[j-1],j];
                x = j;
            }
        }
    }
}