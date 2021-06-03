#include <iostream>
#include <string>

using namespace std;
string res = "";
string init(int n)
{
    //string res ="";
    while (n--)
    {
        res += 'A';
    }
    return res;
}

void next(int n)
{
    int i = n-1;
    while (res[i] != 'A')
    {
        res[i] = 'B';
        i--;
    }
    //i--;
    res[i] = 'B';
    for (int j = i+1; j < n; j++)
        res[j] = 'A';
}

bool check(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (res[i] != 'B')
            return false;
    }
    return true;
}

void display(int n)
{
    for (int i = 0; i < n; i++)
        cout << res[i];
    cout << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        //string res="";
        cin >> n;
        init(n);
        display(n);
        while (!check(n))
        {
            next(n);
            display(n);
        }
        cout<<endl;
        res.clear();
    }
}