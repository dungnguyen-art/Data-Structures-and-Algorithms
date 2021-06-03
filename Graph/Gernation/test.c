#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int x = 0, demchan = 0, demle = 0;
        while (n != 0)
        {
            x = n % 10;
            if (x % 2 == 0)
                demchan++;
            else
                demle++;
            n /= 10;
        }
        printf("%d %d", demle, demchan);
        return 0;
    }
}