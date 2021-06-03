#include<bits/stdc++.h>

using namespace std;
vector<int> ke[10000];
bool chuaxet[10000];
int truoc[10000];
int v,e,nguon,dich;

void BFS(int u){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        chuaxet[s] = false;
        for(int i=0;i<ke[s].size();i++){
            if(chuaxet[ke[s][i]]){
                q.push(ke[s][i]);
                chuaxet[ke[s][i]] = false;
                truoc[ke[s][i]]=s;
            }
        }
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        cin>>v>>e>>nguon>>dich;
        for(int i=0;i<1001;i++)
            ke[i].clear();

        memset(chuaxet,true,sizeof(chuaxet));
        memset(truoc,0,sizeof(truoc));

        for(int i=1;i<=e;i++){
            int x,y;
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        BFS(nguon);

        int j=dich;
        int b[10000] = {0},k = 0;

        while(truoc[j] != nguon){
            // cout<<truoc[j]<<" ";
            b[k] = truoc[j];
            k++;
            j = truoc[j];
        }
        b[k] = nguon;
        k++;
        for(int i=k-1;i>=0;i--)
            cout<<b[i]<<" ";
        cout<<dich<<endl;
    }

}
