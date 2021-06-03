#include<iostream>
#include<cmath>

using namespace std;

int a[100],n;

void Init(int n){
    for(int i=1;i<=n;i++)
        a[i] = n-i+1;
}

bool check(int n){
    for(int i = 1;i<=n;i++){
        if(a[i] != i)
            return false;
    }
    return true;
}

void display(int n){
    for(int i = 1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}

void next(int n){
    int i = n-1;
    while(a[i]<a[i+1] && i>0)
        i--;
    for(int j = n;j>0;j--){
        if(a[j]<a[i]){
            swap(a[j],a[i]);
            break;
        }
    }
    int l = n;
    for(int k = i+1;k <=(n+i)/2;k++){
        int tmp = a[k];
        a[k] = a[l];
        a[l] = tmp;
        l--;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        Init(n);
        while(!check(n)){
            display(n);
            next(n);
        }
        display(n);
        cout<<endl;
    }
    return 0;
}