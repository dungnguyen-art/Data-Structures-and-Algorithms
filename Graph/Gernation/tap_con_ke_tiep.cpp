#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=k;i++)
            cin>>a[i];
        int l = k;
        while(a[l] == n-k+l && l>0){
                l--;
        }
        if(l>0){
            a[l]++;
            for(int i=l+1;i<=k;i++)
                a[i] = a[i-1]+1;
        }
        else{
            for(int i=1;i<=k;i++)
                a[i] = i;
        }
        for(int i=1;i<=k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}