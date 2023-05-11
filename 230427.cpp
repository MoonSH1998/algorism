#include <iostream>

using namespace std;

int main()
{
	int k;
	cout << "Enter the number of squares to eat: ";
	cin >> k;
	int n = 1;
	while (n < k)
	{
		n *= 2;
	}
	int cnt = 0;
	while (k != n)
	{
		n /= 2;
		cnt++;
	}
	cout << "The minimum number of times to split the chocolate: " << cnt << endl;
	return 0;
}