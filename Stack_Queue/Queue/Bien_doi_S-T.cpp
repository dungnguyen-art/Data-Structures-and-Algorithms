#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int s,t;
        cin >> s >> t;
        int res = 0;
        if(s>t){
            res = s-t;
        }
        else{
            while(s<t){
                if(t%2==1){
                    t++;
                    t /= 2;
                    res += 2;
                }
                else{
                    t /= 2;
                    res++;
                }
            }
            res += s-t;
        }
        cout << res << endl;
    }
}