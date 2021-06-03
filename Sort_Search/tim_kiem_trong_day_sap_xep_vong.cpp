#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(x<=a[0]){
            for(int i=0;i<n;i++){
                if(a[i] == x){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(a[i] == x){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}