#include <iostream>

using namespace std;
int n;
int m;
void s(int n)
{
	for (int i = 0; i < n; i++)
		cout << "#";
	cout << endl;
}
void l(int n)
{
	cout << "#";
	for (int i = 0; i < n - 1; i++)
		cout << ".";
	cout << endl;
}
void r(int n)
{
	for (int i = 0; i < n - 1; i++)
		cout << ".";
	cout << "#" << endl;
}
int main(void)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		if (i % 4 == 0 || i % 4 == 2)
		{
			s(n);
		}
		else if (i % 4 == 1)
		{
			r(n);
		}
		else
		{
			l(n);
		}
	}
	return 0;
}
