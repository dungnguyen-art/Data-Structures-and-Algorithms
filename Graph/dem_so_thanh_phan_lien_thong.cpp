#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> ke[10000];
bool chuaxet[10000];
int solt;

void DFS(int u){
    chuaxet[u] = false;
    for(int i=0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
        }
    }
}

void tplt(int k){
    solt = 0;
    for(int u=1;u<=v;u++){
        if(chuaxet[u]){
            solt++;
            DFS(u);
        }
    }
    cout<<solt<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e;
        for(int i=0;i<1001;i++)
            ke[i].clear();
        memset(chuaxet,true, sizeof(chuaxet));
        for(int i=1;i<=e;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        tplt(1);
    }
}