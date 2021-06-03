#include<bits/stdc++.h>
using namespace std;

void phan_so(int a, int b){
    if(a == 0 || b == 0)
        return;
    if(a % b == 0){
        cout<<a/b<<endl;
        return;
    }
    if(b%a == 0){
        cout<<"1/"<<b/a;
        return;
    }
    if(a>b){
        cout<<a/b<<" + ";
        phan_so(a%b,b);
        return;   
    }
    int n = b/a + 1;
    cout<<"1/"<<n<<" + ";
    phan_so(a*n-b,b*n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        phan_so(a,b);
        cout<<endl;
    }
}