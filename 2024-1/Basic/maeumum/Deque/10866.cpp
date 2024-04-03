#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int n;

    cin >> n;
    while (n--)
    {
        string c;
        cin >> c;

        if (c == "push_front")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }

        else if (c == "push_back")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (c == "pop_front")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (c == "pop_back")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (c == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (c == "empty")
        {
            cout << dq.empty() << '\n';
        }
        else if (c == "front")
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }
        else
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }

    return 0;
}
