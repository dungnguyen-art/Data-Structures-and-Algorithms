#include<iostream>

using namespace std;

int dequi(int n){
    if(n<10)
        return 1;
    else return dequi(n/10)+1;
}
int main(){
    int n;
    cin>>n;
    cout<<dequi(n);
}