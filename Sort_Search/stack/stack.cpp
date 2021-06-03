#include<iostream>
#include<stack>

using namespace std;
int main(void){
    stack<int>s;//khai bao stack
    for(int i=1;i<=5;i++)
        s.push(i*10);//dua i*10 vao stack
    cout<<"kich co stack: "<<s.size()<<endl;
    while(!s.empty()){
        int t=s.top();cout<<t<<" ";//lay phan tu dau stack
        s.pop();//dua phan tu dau tien ra khoi stack
    }
}