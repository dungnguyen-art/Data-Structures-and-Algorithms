#include <iostream>
#define p 1000000007

using namespace std;

long long Fibo(int n, long long F[])
{
    for(int i=0;i<n;i++){
        if(i == 0 || i == 1)
            F[i] = i;
        else if(F[i] == -1)
            F[i] = F[i-1]%p + F[i-2]%p;
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long F[n];
        memset(F, -1, sizeof(F));

        cout<<F[n-1]<<endl;
        cout << Fibo(n, F) << endl;
    }
}