#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{

	int a, b, c, d, temp1, temp2, n;
	float a, b;
	cin >> n;
	vector<pair<int, int> > v1;
	vector<pair<int, int> > v2;
	vector<pair<int, int> > v3;
	vector<pair<int, int> > v4;
	vector<pair<int, int> > st;
	pair<int, int> temp;
	for (int i = 0; i < n; i++)
	{
		scanf("%f.%f", &a, &b);
		temp.first = a;
		temp.second = i;
		v1.push_back(temp);
		temp.first = b;
		temp.second = i;
		v2.push_back(temp);
		temp.first = c;
		temp.second = i;
		v3.push_back(temp);
		temp.first = d;
		temp.second = i;
		v4.push_back(temp);
	}
	sort(v1.begin(), v1.end());
	int start = 0, end = 0;
	for (int i = 0; i < n; i++)
	{
		if (v1[i].first == v1[i + 1].first)
		{
			start = i;
			int k = i;
			while (k < n)
			{
				cout << "start: " << start << " , end: " << k << endl;
				if (v1[start].first == v1[k].first)
				{
					end = k;
				}
				k++;
			}
		}
		// start ~end는 중복
		if (end > i)
		{
			// start~end까지의 중복을 찾아냈다.
			// start~end까지의 중복을 정렬해보자.
			// start~end까지의 두번째 배열을 소환 st벡터에 넣은 후 이를 정렬하자
			// st 순서에 따라 start~end를 정렬할 수 있다.
			for (int i = start; i <= end; i++)
			{
				temp1 = v2[v1[i].second].first;
				temp2 = v2[v1[i].second].second;
				temp.first = temp1;
				temp.second = temp2;
				st.push_back(temp);
				// st에는 start~end까지의 두번재 페어가 있다.
			}
			sort(st.begin(), st.end());

			i = end;
		}
		start = 0;
		end = 0;
		cout << v1[i].first << endl;
	}

	return 0;
}