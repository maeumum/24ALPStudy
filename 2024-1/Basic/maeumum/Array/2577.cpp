#include <iostream>
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int n = a * b * c;
    int num[10] = { 0 };

    while (n > 0)
    {
        int digit = n % 10;
        num[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << num[i] << '\n';
    }

    return 0;
}
