#include<bits/stdc++.h>
using namespace std;
//CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 1
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<int>myq;
        while(n--){
            int a;
            cin >> a;
            switch(a)
            {
            case 3:
                int tmp;
                cin >> tmp;
                myq.push(tmp);
                break;	
 
            case 1:
                cout << myq.size() << endl;
            	break;
            case 2:
                if(myq.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO"   << endl;
            	break;
            case 4:
                if(!myq.empty()){
                    myq.pop();
                }
            	break;
            case 5:
                if(!myq.empty()){
                    cout << myq.front() << endl;
                }
                else 
                    cout << -1 << endl;
            	break;
            case 6:
                if(myq.size()>0){
                    cout << myq.back() << endl;
                }
                else
                    cout << -1 << endl;
            	break;
            }
        }
    }
    return 0;
}