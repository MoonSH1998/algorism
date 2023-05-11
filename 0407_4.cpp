#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a("I love C++");
    a.insert(2, "really ");
    cout << a << endl;
    // I really love C++ I study C++
    // replace()함수 : a의 인덱스 2부터 11개의 문자("really love")를 "study"로 대치
    a.replace(2, 11, "study "); // a = "I study C++"
    cout << a << endl;
    return 0;
}