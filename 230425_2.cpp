#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int i = 666;
	

	scanf("%d", &n);

	while (n != 0)
	{
		int temp = i;
		while (temp > 600)
		{
			if (temp % 1000 == 666)
			{
				n--;
				break;
			}
			else
				temp /= 10;
		}
		i++;
	}
	cout << --i;

	return 0;
}