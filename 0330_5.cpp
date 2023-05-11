#include <iostream>
using namespace std;

template <typename T1, typename T2>
void Print(T1 a, T2 b)
{
    cout << a << "," << b << endl;
}
int main(void)
{
    Print(10, "Hello");
    Print(3.141592, 15.0f);
    Print<const char *, double>("ABC", 2.5);
    //문자열 포인터
    return 0;
}