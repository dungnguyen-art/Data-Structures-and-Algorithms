#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n+5];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        long long max1 = *max_element(a,a+n);
        long long min1 = *min_element(a,a+n);
        unordered_set<long long> s1(a,a+n);
        long long t = s1.size();
        cout<<(max1 - min1 + 1 - t)<<endl;
    }
}