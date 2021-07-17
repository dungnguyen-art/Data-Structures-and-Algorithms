#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    deque<int>myq;
    while(t--){
        string s;
        cin >> s;
        if(s=="PUSHBACK"){
            int x;
            cin >> x;
            myq.push_back(x);
        }
        else if(s=="PUSHFRONT"){
            int x;
            cin >> x;
            myq.push_front(x);
        }
        else if(s=="PRINTFRONT"){
            myq.size()>0 ? cout << myq.front()<<endl: cout <<"NONE" <<endl;
        }
        else if(s=="POPFRONT"){
            if(myq.size()>0)
                myq.pop_front(); 
        }
        else if(s=="PRINTBACK"){
            myq.size()>0 ? cout << myq.back() << endl : cout << "NONE" << endl;
        }
        else if(s=="POPBACK"){
            if(myq.size()>0){
                myq.pop_back();
            }
        }
    }
}