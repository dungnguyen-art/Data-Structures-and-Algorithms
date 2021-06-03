#include <iostream>
#include<algorithm>

int main()
{
    int n;
    std::cin >> n;
    int a[n + 5];

    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    for (int i = 0; i < n-1; i++)
    {
        int min = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min){
                min = a[j];
                std::swap(a[i], a[j]);
            }
        }

        std::cout << "Buoc " << i + 1 << ": ";
        for (int i = 0; i < n; i++)
            std::cout << a[i] << " ";

        std::cout << std::endl;
    }
}