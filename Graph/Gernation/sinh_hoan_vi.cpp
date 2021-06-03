#include<iostream>
#include<cmath>

using namespace std;

int n,a[100];

void init(int n){
    for(int i=1;i<=n;i++)
        a[i] = i;
}

bool check(int n){
    for(int i=1;i<=n;i++){
        if(a[i] != n-i+1)
            return false;
    }
    return true;
}

void display(int n){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}

void next(int n){
    int i = n-1;
    while(a[i] > a[i+1] && i>0)
        i--;

    for(int l = n;l>i;l--){
        if(a[l]>a[i]){
            swap(a[l],a[i]);
            break;
        }
    }
    
    int k = n;
    for(int j=i+1;j<= (n+i)/2;j++){
        int tmp = a[j];
        a[j] = a[k];
        a[k] = tmp;
        k--;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        init(n);
        while(!check(n)){
            display(n);
            next(n);
        }
        display(n);
        cout<<endl;
    }
    return 0;
}