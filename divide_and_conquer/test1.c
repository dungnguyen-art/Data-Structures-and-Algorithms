#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <math.h>

#include <string.h>

void solve()
{
    char s[1000];
    // fflush(stdin);
    // fgets(s, sizeof(s), stdin);
    gets(s);
    int n = strlen(s);
    char temp = s[0];
    s[0] = s[n - 1];
    s[n - 1] = temp;
    int i = 0;
    while (s[i] == '0')
        i++;
    for (int j = i; j < n; j++)
    {
        printf("%c", s[j]);
    }
}
int main()
{
    solve();
    return 0;
}