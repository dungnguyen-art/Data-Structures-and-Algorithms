#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> v1, v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }

        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }
        
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
        vector<int> r1(n+m),r2(n+m);
        vector<int>::iterator it,kt;
        
        it = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),r1.begin());
        r1.resize(it-r1.begin());
        for(it = r1.begin();it!=r1.end();++it)
            cout<<*it<<" ";
		cout<<endl;
        kt = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),r2.begin());
        r2.resize(kt - r2.begin());
        
        for(it = r2.begin();it != r2.end();++it)
            cout<<*it<<" ";
        cout<<endl;
		
    }
    return 0;
}