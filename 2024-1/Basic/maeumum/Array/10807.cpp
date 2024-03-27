#include <iostream>

int main()
{
	int n, v, i;
	int arr[101];
	int count = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> v;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v)
			count++;
	}
	std::cout << count;

	return 0;
}
