#include <iostream>
#include <string>
#include <stack>
typedef long long ll;

int main(){
    int test;
    std::cin >> test;
    while(test--){
        std::string s;
        std::stack<ll> stack;
        std::cin >> s;
        long long tmp;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' ||  s[i] == '/' || s[i] == '%' || s[i] == '^'){
                ll a = stack.top(); stack.pop();
                ll b = stack.top(); stack.pop();
                if(s[i] == '+') tmp = b + a;
                else if(s[i] == '-') tmp = b - a;
                else if(s[i] == '*') tmp = b * a;
                else if(s[i] == '/') tmp = b / a;
                else if(s[i] == '%') tmp = b % a;
                else if(s[i] == '^'){
                    tmp == b;
                    for(int i = 1; i < a; i++){
                        tmp *= b;
                    }
                }
                stack.push(tmp);
            }else stack.push(ll(s[i] - '0'));
        }
        std::cout << stack.top() << "\n";
    }
}