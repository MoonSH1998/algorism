#include <iostream>

using namespace std;

int main(void)
{
	int a[88] = {0};
	int sum = 5;
	int k;
	for (int i = 0; i < 4; i++)
	{
		cin >> k;
		a[k] = 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		if (a[k] == 1)
		{
			sum--;
		}
	}
	cout << sum;
	return 0;
}
