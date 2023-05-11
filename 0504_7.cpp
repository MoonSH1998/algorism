#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;
	while (a >= 1)
	{
		if (a % 2 == 0)
			a /= 2;
		else
		{
			break;
		}
	}
	if (a == 1)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
