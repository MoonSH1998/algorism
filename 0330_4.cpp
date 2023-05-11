#include <iostream>
using namespace std;

template <typename T>
void Print(T a, T b)
{
    cout << a << "," << b << endl;
}
int main(void)
{
    Print<int>(10, 20);
    Print<double>(0.123, 1.123);
    Print<const char *>("ABC", "abcde");
    //문자열 포인터
    return 0;
}