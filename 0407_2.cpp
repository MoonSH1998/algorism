#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string n1 = " apple ";
    string n2 = "banana";
    int res = n1.compare(n2);

    if (res == 0)
        cout << "두 문자열이 같다";
    else if (res < 0)
        cout << n1 << " < " << n2 << endl;
    else
        cout << n2 << " < " << n1 << endl;
    if (n1 == n2)
        cout << "두 문자열이 같다";
    // n1과 n2가 동일
    // n1이 앞에 옴
    // n2이 뒤에 옴 //문자열 크기 비교
    if (n1 < n2)
        cout << n1 << "이" << n2 << "보다 사젂에서 먼저 나온다" << endl;
    return 0;
}