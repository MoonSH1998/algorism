#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	long long a, b, c;
	cin >> a >> b >> c;
	float k = (c - a) * 1.0 / (a - b) * 1.0;
	cout << ceil(k) + 1;
	return 0;
}