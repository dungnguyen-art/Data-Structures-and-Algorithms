#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    string s;
    cin>>n;
    cin.ignore();
    int a[1001][1001];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j] = 0;

    for(int i=1;i<=n;i++){
        getline(cin,s);
        s += " ";
        int nb = 0;
        int j = 0;
        while(j<s.size()){
            if(s[j] >= '0' && s[j] <= '9'){
                nb = nb*10 + (int)(s[j]-'0');
                // cout<<nb<<" ";
            }
            else if(nb > 0){
                a[i][nb] = 1;
                nb = 0;
            }
            j++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}