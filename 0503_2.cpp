#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(void)
{
	deque<int> dq;
	for (int i = 0; i < 5; i++)
	{
		dq.push_back((i + 1) * 10);
	}
	// iterator 선얶
	deque<int>::iterator iter;
	//[default 출력]
	cout << "입력값 : ";
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	//앞 뒤 삽입
	cout << "push_front & end : ";
	dq.push_front(1);
	dq.push_front(2);
	dq.push_back(100);
	dq.push_back(200);
	for (iter = dq.begin(); iter != dq.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	//역으로 출력
	cout << "reverse_iterator : ";
	deque<int>::reverse_iterator rIter;
	for (rIter = dq.rbegin(); rIter != dq.rend(); rIter++)
	{
		cout << *rIter << " ";
	}
	cout << endl;
	return 0;
}