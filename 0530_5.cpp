#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	vector<string> answer;
	vector<pair<int, int> > ip1;
	vector<pair<int, int> > ip2;
	vector<pair<int, int> > ip3;
	vector<pair<int, int> > ip4;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		answer.push_back(s);
		istringstream ss(s);
		string strBuffer;
		vector<int> v;
		v.clear();
		while (getline(ss, strBuffer, '.'))
		{
			v.push_back(stoi(strBuffer));
		}
		pair<int, int> temp;
		temp.first = i;
		temp.second = v[0];
		ip1.push_back(temp);
		temp.second = v[1];
		ip2.push_back(temp);
		temp.second = v[2];
		ip3.push_back(temp);
		temp.second = v[3];
		ip4.push_back(temp);
	}

	cout << ip1[0].second - 5;

	// cout << s;
	return 0;
}