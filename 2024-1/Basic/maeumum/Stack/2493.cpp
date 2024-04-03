#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int height;
	stack<pair<int, int>> s;

	cin >> n;
	s.push({ 100000001, 0 });
	
	for(int i=1; i<=n; i++)
	{
		cin >> height;

		while (s.top().first < height)
		{
			s.pop();
		}
		cout << s.top().second << " ";
		s.push({ height, i });
	}

	return 0;
	
}



