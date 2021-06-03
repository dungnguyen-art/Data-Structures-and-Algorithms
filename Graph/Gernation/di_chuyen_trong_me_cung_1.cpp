#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1][n+1];
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++)  
                cin>>a[i][j];
        }
        int x;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] == 1 && a[i+1][j] == 1){
                    cout<<"D";
                    x = j;
                }
                else if(a[i][j] == 1 && a[i][j+1] ==1 && j>=x)
                    cout<<"R";
            }
        }
        cout<<endl;
    }
}