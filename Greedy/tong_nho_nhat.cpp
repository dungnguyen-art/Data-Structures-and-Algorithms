#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++)
            cin>>a[i];


        sort(a,a+n);
        string s = "";
        string ss = "";
        for(int i=0;i<n;i++){
            if(i % 2 == 0){
                s += to_string(a[i]);
            }
            else
                ss += to_string(a[i]);
        }
        stringstream s1(s);
        long long x = 0;
        s1 >> x;
        stringstream ss1(ss);
        long long k = 0;
        ss1 >> k;
        long long res = x + k;
        cout<<res<<endl;
        
    }
}