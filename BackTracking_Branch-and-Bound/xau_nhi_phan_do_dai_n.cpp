#include<iostream>
using namespace std;

int n,a[100];

void Result(){
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout << endl;
}
void Try(int u){
    for(int i=0;i<=1;i++){
        a[u] = i;
        if(u == n)
            Result(); 
        else
            Try(u+1);
    }
}
int main(){
    //int n;
    cin>>n;
    Try(1);
}