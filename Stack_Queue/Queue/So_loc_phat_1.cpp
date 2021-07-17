#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<long long>q;
        vector<long long>res;
        q.push(6);
        q.push(8);
        long long tmp = 1;
        for(int i=1;i<=n;i++)
            tmp *= 10;
        long long cnt = 0;
        while(q.front()/tmp < 1){
            q.push(q.front()*10 + 6);
            q.push(q.front()*10 + 8);
            res.push_back(q.front());
            q.pop();
            cnt++;
        }
        cout << cnt << endl;
        for(int i=res.size()-1;i>=0;i--){
            cout << res[i] <<" ";
        }
        cout << endl;
    }
}