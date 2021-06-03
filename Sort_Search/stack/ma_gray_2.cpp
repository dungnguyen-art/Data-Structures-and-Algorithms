#include<iostream>
#include<bitset>
#include<string>

using namespace std;

char flip(char c){
    return (c == '0' ? '1' : '0');
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string res = "";
        res = res + s[0];
        for(int i = 1;i<s.size();i++){
            if(s[i] == '0')
                res += res[i-1];
            else
                res += flip(res[i-1]);
        }
        cout<<res<<endl;
    }
}