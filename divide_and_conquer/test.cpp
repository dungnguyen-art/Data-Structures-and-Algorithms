#include<bits/stdc++.h>
#define max 100

using namespace std;
int n,m[max][max],kt[max],so_canh,t,dH,dd;
struct canh{
    int d1,d2,trong_so;
};

canh c[max],tree[max];
bool ss(canh a, canh b){
    if(a.trong_so < b.trong_so)
        return 1;
    if(a.trong_so > b.trong_so)
        return 0;
    else if(a.d1 < b.d1)
        return 1;
    else
        return 0;
}

int main(){
    cin>>n>>dd;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>m[i][j];
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(m[i][j] > 0)
                c[so_canh++] = {i,j,m[i][j]};
        }
    }
    sort(c,c+so_canh,ss);
    kt[dd] = 1;
    int i=0;
    while(t<n-1){
        if(kt[c[i].d1] + kt[c[i].d2] == 1){
            tree[t++] = c[i];
            kt[c[i].d1] = 1;
            kt[c[i].d2] = 1;
            dH += c[i].trong_so;
        }
        i++;
    }
    cout<<"dH = "<<dH<<endl;
    for(int j=0;j<t;j++)
        cout<<tree[j].d1<<" "<<tree[j].d2 <<endl;
}