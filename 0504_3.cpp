#include <iostream>
#include <string>
using namespace std;
int main(void)
{

	int x;
	string y;
	int ans;

	cin >> x >> y;
	int min = 1000000;
	int d[1000000] = {};

	for (int i = 0; i < y.length(); i++)
	{
		if ((int)y[i] < min)
		{
			min = (int)y[i];
		}
		d[i] = y[i] <= 57 ? y[i] - 48 : y[i] - 55;
	}

	min = min <= 57 ? min - 48 : min - 55;
	for (int nth = min + 1; nth <= 16; nth++)
	{
		int sum = 0;

		for (int k = 0; k < y.length(); k++)
		{

			for (int r = y.length() - k - 1; r >= 1; r--)
			{
				d[k] *= nth;
			}

			sum += d[k];
		}
		if (sum == x)
		{
			cout << nth;
			return 0;
		}
		for (int i = 0; i < y.length(); i++)
		{
			d[i] = y[i] <= 57 ? y[i] - 48 : y[i] - 55;
		}
	}

	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;
// int main(void)
// {

// int x;
// string y;
// int ans;

// cin >> x >> y;
// int min = 1000000;
// int d[1000000] = {};

// for (int i = 0; i < y.length(); i++)
// {
// if ((int)y[i] < min)
// {
// min = (int)y[i];
// }
// d[i] = y[i] <= 57 ? y[i] - 48 : y[i] - 55;
// }

// min = min <= 57 ? min - 48 : min - 55;
// for (int nth = 16; nth >= min + 1; nth--)
// {
// int sum = 0;

// for (int k = 0; k < y.length(); k++)
// {

// for (int r = y.length() - k - 1; r >= 1; r--)
// {
// d[k] *= nth;
// if (d[k] > x)
// break;
// }

// sum += d[k];
// }
// if (sum == x)
// {
// ans = nth;
// }
// for (int i = 0; i < y.length(); i++)
// {
// d[i] = y[i] <= 57 ? y[i] - 48 : y[i] - 55;
// }
// }
// cout << ans;

// return 0;
// }