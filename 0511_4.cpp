#include <iostream>
using namespace std;
int main(void)
{
	int min, max;
	cin >> min >> max;
	if (min != max)
	{
		cout << 2;
	}
	else
	{
		int i = 2;
		while (i != 0)
		{
			if (min % i == 0)
			{
				break;
			}
			i++;
		}
		cout << i;
	}
	return 0;
}