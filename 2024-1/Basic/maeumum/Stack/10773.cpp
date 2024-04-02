#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;
	int k;
	int sizeofstack;
	int n;
	int sum = 0;

	cin >> k;
	
	while(k--)
	{
		cin >> n;

		if (n == 0)
		{
			s.pop();
		}
		else
		{
			s.push(n);
		}

	}
	sizeofstack = s.size();
	for (int i = 0; i < sizeofstack; i++)
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;

	
}
