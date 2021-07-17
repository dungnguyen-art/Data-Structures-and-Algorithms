#include<bits/stdc++.h>
using namespace std;
int A[100],n;
int B[100] = {false};
vector < vector<int> > res;

void xuat() {
    vector <int> req;
    for (int i = 1; i <= n; i++) {
        req.push_back(A[i]);
    }
    res.push_back(req);
}

void sinh(int i) {
    for (int j = 1; j <= n; j++) {
        if (!B[j]) {
            B[j] = true;
            A[i] = n-j+1;
            if (i == n) {
                xuat();
            } 
            sinh(i+1);
            B[j] = false;
        } 
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        res.clear();
        cin >> n;
        sinh(1);
        cout << res.size() << endl;
        for (int i = 0; i < res.size();i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
}