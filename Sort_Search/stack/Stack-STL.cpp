#include <iostream>
#include <stack>
using namespace std;
int main(void){
	stack <int> s;
	for(int i=1; i<=10; i++)
		s.push(i*10);
	cout<<"Kich co stack:"<<s.size()<<endl;
	cout<<"Trang thai stack:"<<s.empty()<<endl;	
	while(!s.empty()){
		int t = s.top();cout<<t<<" ";
		s.pop();
	}
}
