#include<bits/stdc++.h>

using namespace std;

int F[40005],a[205],n,s;

// 5 6
// 1 2 4 3 5
int kiemtra(){
    int i,j;
    memset(F,0,sizeof(F));
    F[0] = 1;//khoi dong.
    for(int i=1;i<=n;i++){
        for(j=s;j>=a[i];j--){
            if(F[j]==0 && F[j-a[i]] == 1)
                F[j] = 1;
        }
    
    }
    return F[s];
}
//f1 = 1,f2 = 
main(){
    int t,i;
    cin>>t;
    while(t--){
        cin>>n>>s; 
        for(int i=1;i<=n;i++) cin>>a[i];
        if(kiemtra()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}