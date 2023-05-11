#include <iostream>

using namespace std;

int main(void)
{
	string full, time;
	cin >> full >> time;

	int hDifer = ((int)full.at(0) - (int)time.at(0)) * 10 + (int)full.at(1) - (int)time.at(1);

	int mDifer = ((int)full.at(3) - (int)time.at(3)) * 10 + (int)full.at(4) - (int)time.at(4);

	if (hDifer * 60 + mDifer <= 0 && hDifer * 60 + mDifer > -10)
	{
		cout << 1;
	}
	else
		cout << 0;

	return 0;
}
