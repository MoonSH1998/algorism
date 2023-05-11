#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a("I ");
    a.append("love");
    cout << a << endl;
    // I love
    // I love C++..
    // a = "I love"
    //문자열 연결은 +, +=연산자를 이용
    string s("I love C++");
    string b(".");
    string c;
    c = s + b; // s,b문자열에는변화가없고 c="IloveC++."로변경됨 c += b; //b문자열에는 변화가 없고 c = "I love C++.."로 변경됨
    cout << c << endl;
    return 0;
}