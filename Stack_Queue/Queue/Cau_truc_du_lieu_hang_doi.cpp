#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    queue<int>myq;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x;
            cin >> x;
            myq.push(x);
        }
        else if(s=="PRINTFRONT"){
            if(!myq.empty())
                cout << myq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s=="POP"){
            if(myq.size() > 0)
                myq.pop();
        }
    }
    return 0;
}