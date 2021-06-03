#include<iostream>
#include<cmath>

using namespace std;

int dequi4(int n,int m){
    if(m==0)
        return n;
    else return dequi4(m,n%m);
}
int main(){
    int n,m;
    cin>>n>>m;
    //if(n<m)
       // swap(n,m);
    cout<<dequi4(n,m);
}