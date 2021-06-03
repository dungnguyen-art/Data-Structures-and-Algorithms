#include <iostream>
using namespace std;

int n, k, c[100];
bool ok;

void Init(void)
{
    cin >> n;
    k = 1;
    c[k] = n;
    ok = true;
}
void result(void)
{
    cout<<"(";
    for (int i = 1; i < k; i++)
        cout << c[i] << " ";
    cout<<c[k];
    cout<<") ";
}
void Next_Devision(void)
{
    int i, j, div, mod, sum;
    {
        int i = k;                 //xuất phát từ cuối cách chia trước đó.
        while (i > 0 && c[i] == 1) //Tìm i sao cho c[i] != 1
            i--;
        if (i > 0)
        {                    //Nếu chưa phải là cuối cùng thì i>0
            c[i] = c[i] - 1; //Giảm c[i] đi một đơn vị.
            sum = k - i + 1;
            div = sum / c[i];
            mod = sum % c[i];
            k = i;
            if (div > 0)
            {
                for (j = i + 1; j <= i + div; j++)
                    c[j] = c[i];
                k = k + div;
            }
            if (mod > 0)
            {
                k = k + 1;
                c[k] = mod;
            }
        }
        else
            ok = false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        Init();
        while (ok)
        {
            result();
            Next_Devision();
        }
        cout<<endl;
    }
}