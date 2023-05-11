#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    char buf[100];
    ifstream in("test.txt");
    if (in.is_open())
    {
        while (in)
        {
            in.getline(buf, 100);
            cout << buf << endl;
        }
    }
    else
    {
        cout << "파일을 찾을 수 없다" << endl;
    }
    return 0;
}