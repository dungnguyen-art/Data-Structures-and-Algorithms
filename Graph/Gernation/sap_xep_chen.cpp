#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key,j,i;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(i=1;i<n;i++){
		key = a[i];
		j = i-1;
		while(j>=0){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
			j--;
		}
		cout<<"Buoc "<<i<<": ";
		for(int h=0;h<=i;h++)
			cout<<a[h]<<" ";
		
		cout<<endl;
	}
	return 0;
}