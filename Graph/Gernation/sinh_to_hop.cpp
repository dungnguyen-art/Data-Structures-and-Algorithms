#include<iostream>

using namespace std;

int n,k;
int a[100];
void init(int n,int k){
    for(int i=1;i<=k;i++)
        a[i] = i;
}

void display(int n,int k){
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
}

bool check(int n,int k){
    for(int i=1;i<=k;i++){
        if(a[i] != n-k+i)
            return false;
    }
    return true;
}

void next(int n,int k){
    int i = k;
    while(a[i] == n-k+i)
        i--;
    a[i]++;
    for(int j=i+1;j<=k;j++)
        a[j] = a[j-1]+1;

}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        //int n,k;
        cin>>n>>k;
        init(n,k);
        while (!check(n,k))
        {
            display(n,k);
            next(n,k);
        }
        display(n,k);
        cout<<endl;
    }
    return 0;
    
}