#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[100];
void Init(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        a[i] = 0;
}
void display(){
    int cnt = 0;
    for(int i=1;i<=n;i++)
        if(a[i] == 1)
            cnt++;
    if(cnt == k){
        for(int i=1;i<=n;i++)
            cout<<a[i];
        cout<<endl;
    }
}
bool check(){
    for(int i=1;i<=n;i++){
        if(a[i] != 1)
            return false;
    }
    return true;
}
void Next(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i--;
    }
    a[i] = 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Init();
        while(!check()){
            display();
            Next();
        }
        display();
    }
}