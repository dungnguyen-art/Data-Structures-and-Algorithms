#include<bits/stdc++.h>
using namespace std;
int a[10] = {1,2,5,10,20,50,100,200,500,1000};
int s;
int res;
void Init(){
    cin>> s;
    res = 0;
}
void Greedy(){
    int i = 9;
    int sum = s;
    while(i>=0){
        if(a[i] <= sum){
            sum -= a[i];
            res++;
            i++;
        }
        if(sum == 0)
            break;
        else
            i--;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Init();
        Greedy();
        cout<<res<<endl;
    }
}