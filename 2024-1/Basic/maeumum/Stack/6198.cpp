#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int height;
	long long int sum = 0;
	stack<int> s;


	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> height;
		
		if (s.empty())
		{
			s.push(height);
				continue;
		}

		while (!s.empty() && height >= s.top())
		{
			s.pop();
		}
		sum += s.size();
		s.push(height);

	}
	
	cout << sum;

}



