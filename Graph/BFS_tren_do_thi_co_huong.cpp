#include<bits/stdc++.h>

using namespace std;
vector<int>ke[10000];
bool chuaxet[10000];
int v,e,nguon;
void BFS(int u){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int s = q.front();
        cout<<s<<" ";
        q.pop();
        chuaxet[s] = false;
        for(int i=0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                chuaxet[ke[s][i]] = false;
                q.push(ke[s][i]);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e>>nguon;
        for(int i=0;i<1001;i++)
            ke[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
        }
        BFS(nguon);
        cout<<endl;
    }
}