#include <iostream>
#include <stack>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;
	std::stack <int> s;
	while(n--)
	{
		std::string c;
		std::cin >> c;

		if (c == "push")
		{
			int t;
			std::cin >> t;
			s.push(t);
		}
		else if (c == "pop")
		{
			if (s.empty())
				std::cout << -1 << '\n';
			else 
			{
				std::cout << s.top() << '\n';
				s.pop();

			}

		}
		else if (c == "size")
		{
			std::cout << s.size() << '\n';
		}
		else if (c == "empty")
		{
			std::cout << (int)s.empty() << '\n';
		}
		else
		{
			if (s.empty())
				std::cout << -1 << '\n';
			else
				std::cout << s.top() << '\n';
		}
		
	}

}
