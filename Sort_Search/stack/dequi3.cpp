#include<iostream>
#include<string>

using namespace std;

bool dequi(string s,int i,int j){
    if(i==j) return true;
    else if(s[i] != s[j]) return false;
    else if(i<j+1)
        return dequi(s,++i,j--);
    return true;
}

bool check(string s,int j){
    if(j==0)
        return true;
    else return dequi(s,0,--j);
}
int main(){
    string s;
    cin>>s;
    int i = 0;
    int j = s.size()-1;
    if(check(s,j)){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}