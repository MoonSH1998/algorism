#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(void)
{
	map<int, string> m;
	m.insert(pair<int, string>(40, "me"));
	m.insert(pair<int, string>(35, "yeon"));
	m.insert(pair<int, string>(10, "do"));
	m.insert(pair<int, string>(90, "in"));
	m.insert(pair<int, string>(65, "song"));
	m.insert(pair<int, string>(20, "mit"));
	m.insert(pair<int, string>(50, "su"));
	//접근방법 1
	map<int, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "[" << iter->first << ", " << iter->second << "]"
			 << " ";
	}
	cout << endl;
	//접근방법 2
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "[" << (*iter).first << ", " << (*iter).second << "]"
			 << " ";
	}
	return 0;
}