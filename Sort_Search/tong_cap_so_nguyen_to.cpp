#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    if(n<2)
        return false;
    else{
        for(int i=2;i<=sqrt(n);i++)
            if(n % i)
                return false;
    }
    return true;
}

void Sieve(int n){
    bool prime[n+5];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]){
            for(int j=i*2;j<=n;j+=i)
                prime[j] = false;
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i] && prime[n-i]){
            cout<<i<<" "<<n-i;
            break;
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n % 2 != 0){
            if(check(n-2))
                cout<<"2 "<<n-2<<endl;
        }
        else{
            Sieve(n);
        }
    }
}