#include<bits/stdc++.h>
using namespace std;
long long A[100],n,k;

void fibonaci() {
    A[1] = 0;
    A[2] = 1;
    for (int i = 3; i < 92; i++) {
        A[i] = A[i-1]+A[i-2];
    }
}

int check(int n, int k) {
    if (k == 1) return 0;
    if (k == 2) return 1;
    if (k > A[n-2]) return check(n-1,k-A[n-2]);
    else return check(n-2,k); 
}



int main(){
    fibonaci();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << check(n,k);
        cout << endl;
    }
}