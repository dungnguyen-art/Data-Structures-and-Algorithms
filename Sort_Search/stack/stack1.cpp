#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    stack<int>s;
    s.push(a[0]);

    int x,T;
    for(int i=1;i<n;i++){
        x = a[i];
        if(!s.empty()){
            T=s.top();
            s.pop();
            while(T<x){
                if(s.empty()) break;
                T = s.top();
                s.pop();
            }
            if(T>x)
                s.push(T);
        }
        s.push(x);
    }
    while(!s.empty()){
        T = s.top();
        s.pop();
        
    }
}