#include<bits/stdc++.h>

using namespace std;
vector<int>ke[1005];
int v,e;
bool chuaxet[1005];
int truoc[1005];
void BFS(int u){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        chuaxet[s]=false;
        for(int i=0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                chuaxet[ke[s][i]] = false;
                q.push(ke[s][i]);
            }
        }
    }
}

int tplt(int u){
    int lt = 0;
    for(int i=1;i<=v;i++){
        if(chuaxet[i]){
            BFS(i);
            lt++;
        }
    }
    return lt;
}

void canhcau(int u){

}

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<1001;i++)
            ke[i].clear();
        memset(chuaxet,true,sizeof(chuaxet));
        for(innt i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
    }
}