#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        int b[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(a,a+n);
        int x = 0,y = 0;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                x = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i] != b[i]){
                y = i;
                break;
            }
        }
        cout<<x+1<<" "<<y+1<<endl;
    }
    return 0;
}