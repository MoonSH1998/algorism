#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> v;
vector<int> v2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);


	int  temp,n,minSum = 999999999;
	int ans[2];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp)
		temp > 0 ? v.push_back(temp) : v2.push_back(temp);
	
	}

	sort(v.begin(), v.end());

	sort(v2.begin(), v2.end());

	int startV = 0;
	int startV2 = v2.size();
	while((startV < v.size()) &&(startV2 < v2.size())){
		
	int sum = abs(v[startV] + v2[startV2]);

	if(sum==0){
		cout << v[startV] << " " << v2[startV2];
		return 0;
	}else if(sum < minSum){
		ans[0] = startV;
		ans[1] = startV2;
	}

	sum>0 ?  startV2++ : startV++;

	}
	cout << ans[0] << " " << ans[1];

	
	return 0;
}
