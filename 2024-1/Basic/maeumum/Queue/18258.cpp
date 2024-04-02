#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	queue<int> q;

	cin >> n;

	while (n--)
	{
		string c;
		cin >> c;
		
		if (c == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (c == "pop")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (c == "size")
		{
			cout << q.size() << '\n';
		}
		else if(c == "empty")
		{
				cout << q.empty() << '\n';
		}
		else if (c == "front")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';

			}
		}
		else
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.back() << '\n';
			}
		}

	}
}
