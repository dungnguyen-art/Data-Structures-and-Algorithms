#include<bits/stdc++.h>
using namespace std;

vector<int>ke[1001];
bool chuaxet[1001];
int truoc[1001];
void DFS(int u){
    chuaxet[u] = false;
    for(int i=0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]]){
            DFS(ke[u][i]);
            truoc[ke[u][i]] = u;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int v,e;
        cin>>v>>e;
        memset(truoc,0,sizeof(truoc));
        
        for(int i=0;i<1001;i++)
            ke[i].clear();
        
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin>>q;
        while(q--){
            int nguon,dich;
            cin>>nguon>>dich;
            memset(chuaxet,true,sizeof(chuaxet));
            DFS(nguon);
            if(!chuaxet[dich])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}