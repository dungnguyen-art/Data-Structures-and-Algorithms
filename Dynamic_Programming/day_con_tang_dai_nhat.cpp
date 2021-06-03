#include <bits/stdc++.h>
#define p 1e9+7;

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        long long D[100000] = {0};
        D[0] = D[1] = 1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                D[i] += D[i-j];
                D[i] %= p;
            }
        }
        cout<<D[n]<<endl;
    }
    return 0;
}