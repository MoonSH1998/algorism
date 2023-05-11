#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    string address("인천 송도동");
    string copyAddress(address);

    // C-스트링(cha []배열 ) 으로부터 스트링 객체 생성
    char text[] = {'l', 'o', 'v', 'e', ' ', 'c', '+', '+', '\0'};
    string title(text);

    // string 객체의 문자열은 cout<<를 이용하여 화면에 출력
    cout << address << endl;
    cout << title << endl;
    return 0;
}