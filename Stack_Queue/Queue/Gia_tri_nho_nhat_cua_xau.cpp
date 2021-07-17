#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        long long b[10000] = {0};
        for(int i=0;i<s.size();i++){
            b[s[i]]++;
        }
        priority_queue<int,vector<long long>> pq;
        for(int i=0;i<s.size();i++){
            if(b[s[i]] > 0){
                pq.push(b[s[i]]);
                b[s[i]] = 0;
            }
        }
        while(k--){
            int x  = pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        long long tmp = 0;
        while(!pq.empty()){
            tmp += pq.top()*pq.top();
            pq.pop();
        }
        cout << tmp << endl;
    }
}