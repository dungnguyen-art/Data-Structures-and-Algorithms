#include <bits/stdc++.h>

using namespace std;

long long gap_doi_day_so(long long n, long long k){
    long long tmp = pow(2,n-1);
    if(k == tmp)
        return n;
    else if( k<tmp)
        return gap_doi_day_so(n-1,k);
    else
        return gap_doi_day_so(n-1,k-tmp);
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout<<gap_doi_day_so(n,k)<<endl;
    }
}