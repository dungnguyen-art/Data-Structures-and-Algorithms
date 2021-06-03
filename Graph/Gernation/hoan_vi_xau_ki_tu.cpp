#include<iostream>
#include<string>

using namespace std;

void BackTracking(string s, int l,int r){
   if(l == r){
       cout<<s<<" ";
   }
   else{
       for(int i=l;i<r;i++){
           swap(s[l],s[i]);
           BackTracking(s,l+1,r);
          // swap(s[l],s[i]);
       }
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        BackTracking(s,0,n);
        cout<<endl;
    }
}