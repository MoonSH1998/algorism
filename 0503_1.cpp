
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	vector<vector<int> > arr;
	cout << "배열 크기 입력 : ";

	cin >> n;
	vector<int> element(n);
	for (int i = 0; i < n; i++)
	{

		arr.push_back(element);
	}

	cout << arr.size() << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i].clear();
		cout << arr[i].size() << " ";
	}
	cout << endl;
	arr.clear();
	cout << arr.size() << endl;

	return 0;
}