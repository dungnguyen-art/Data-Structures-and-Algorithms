#include<iostream>

using namespace std;

int n,arr[100][100];
void init(){
    cin>>n;
    int i = 0;
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
}

void printfPascal(){
    int t = n-1;//4
    for(int line = 1;line<n;line++){
        for(int i=0;i<t;i++){
            arr[line][i] = arr[line-1][i] + arr[line-1][i+1];
            //cout<<arr[line][i]<<" ";
        }
        //cout<<endl;
        t--;
    }
    int d = 1;
    for(int line = n-1;line>=0;line--){
        cout<<"[";
        for(int i=0;i<d;i++){
            if(i == d-1)
                cout<<arr[line][i];
            else
                cout<<arr[line][i]<<" ";
        }
        d++;
        cout<<"] ";
        // cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        printfPascal();
        cout<<endl;
    }
}