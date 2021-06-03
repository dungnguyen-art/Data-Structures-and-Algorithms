#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		unordered_map<char,int>has;
		int max = 0;
		for(int i=0;i<s.size();i++){
			has[s[i]]++;
			if(has[s[i]] > max)
				max = has[s[i]];
		}
		if(max <= (int)s.size()/2 + 1)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;
	}
}
///a a a b b