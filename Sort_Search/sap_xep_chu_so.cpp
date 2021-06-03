#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string a;
        getline(cin,a);
        a.erase(remove(a.begin(),a.end(),' '),a.end());
        // cout<<a;
        set<char> s(a.begin(),a.end());

        for(auto i:s)
            cout<<i<<" ";
        cout<<endl;
    }
}