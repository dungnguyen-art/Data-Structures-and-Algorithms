#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int a[n + 5];

    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
            std::swap(a[i], a[min]);
        std::cout << "Buoc " << i + 1 << ": ";

        for (int k = 0; k < n; k++)
            std::cout << a[k] << " ";
        std::cout << std::endl;
    }
    return 0;
}