#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> v;
	//우선 세 점이 일직선상에 있는지부터 확인
	double n, x1, y1, x2, y2, x3, y3, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		// 1은 위치 2는 기준점 3 은 목표물
		m = (y2 - y1) / (x2 - x1);
		if ((y3 - y1) == ((x3 - x1) * m))
		{
			v.push_back(3);
		}
		else if (x2 == x1)
		{
			if (x3 < x1)
			{
				v.push_back(1);
			}
			else
			{
				v.push_back(2);
			}
		}
		else if (x2 > x1)
		{
			if (((x3 - x1) * m + y1) < y3)
			{
				v.push_back(1);
			}
			else
			{
				v.push_back(2);
			}
		}
		else
		{
			if (((x3 - x1) * m + y1) < y3)
			{
				v.push_back(2);
			}
			else
			{
				v.push_back(1);
			}
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}