#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        for(int i=1;i<=n;i++){
            stack<int>st;
            int k = i;
            while(k>0){
                int tmp = k%2;
                st.push(tmp);
                k = k/2;
            }
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        cout << endl;
    }
}