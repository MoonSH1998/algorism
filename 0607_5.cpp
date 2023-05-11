#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> a;
		if (a > 0)
		{
			s.push(a);
		}
		else
		{
			if (s.empty() || s.top() != -a)
			{
				cout << "no";
				return 0;
			}
			else
			{
				s.pop();
			}
		}
	}
	if (s.empty())
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	return 0;
}