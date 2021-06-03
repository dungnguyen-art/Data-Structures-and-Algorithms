#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];

    unordered_set<int> s1(a,a+n);
    for(auto const &i:s1){
        cout<<i<<" ";
    }
}