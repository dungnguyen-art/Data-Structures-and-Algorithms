#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        stack<int> myc;
        string s;
        cin>>s;
        for(int i=s.size()-1; i  >= 0;i--){
            if(s[i] == '+' || s[i]=='-' ||s[i]=='/'||s[i] == '*'){
                int tmp1 = myc.top();myc.pop();
                int tmp2 = myc.top();myc.pop();
                int tmp;
                if(s[i] == '+') tmp = tmp1 + tmp2;
                else if(s[i] == '-') tmp = tmp1 - tmp2;
                else if(s[i] == '*') tmp = tmp1 * tmp2;
                else if(s[i] == '/') tmp = tmp1 / tmp2;
                else if(s[i] == '%') tmp = tmp1 % tmp2;
                myc.push(tmp);
            }else myc.push(s[i]-'0');
        }
        cout << myc.top() << '\n';
    }
}