#include <iostream>
using namespace std;
int main(void)
{
	long long a, b, c;
	cin >> a >> b >> c;
	if ((c - b) % (a - b) == 0)
		cout << (c - b) / (a - b);
	else
		cout << (c - b) / (a - b) + 1;
	return 0;
}