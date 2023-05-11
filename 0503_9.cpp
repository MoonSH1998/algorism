#include <iostream>
#include <set>
using namespace std;
int main(void)
{
	multiset<int> ms;
	ms.insert(9);
	ms.insert(13);
	ms.insert(5);
	ms.insert(11);
	ms.insert(7);
	ms.insert(11);
	ms.insert(3);
	ms.insert(1);
	ms.insert(11);
	ms.insert(15);
	multiset<int>::iterator iter;
	for (iter = ms.begin(); iter != ms.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	//반복자 start와 end를 선얶
	multiset<int>::iterator start, end;
	// key 11이 처음 나온 부분 [폐구갂]
	start = ms.lower_bound(11);
	cout << "lower_bound(11) : " << *start << endl;
	// key 11의 마지막 부분의 다음! (개구갂)
	end = ms.upper_bound(11);
	cout << "upper_bound(11) : " << *end << endl;
	for (start; start != end; start++)
	{
		cout << *start << " ";
	}
	cout << endl;
	return 0;
}