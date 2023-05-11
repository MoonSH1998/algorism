#include <iostream>
#include <string>
using namespace std;
int main(void)
{

	int no = 0;
	int cnt;
	string str;
	cin.ignore();
	cin >> cnt;
	cin.ignore();

	for (int j = 0; j < cnt; j++)
	{
		// str = "";
		//  3
		// cin.ignore();
		getline(cin, str);

		for (int i = 0; i < str.length(); i++)
		{
			switch ((int)str[i])
			{
			case 97:
				printf("%c", str[i]);
				break;
			case 101:
				printf("%c", str[i]);
				break;
			case 105:
				printf("%c", str[i]);
				break;
			case 111:
				printf("%c", str[i]);
				break;
			case 117:
				printf("%c", str[i]);
				break;
			case 65:
				printf("%c", str[i]);
				break;
			case 69:
				printf("%c", str[i]);
				break;
			case 73:
				printf("%c", str[i]);
				break;
			case 79:
				printf("%c", str[i]);
				break;
			case 85:
				printf("%c", str[i]);
				break;
			default:
				no++;
			}
			if (cnt == str.length())
			{
				printf("???");
			}
		}
		no = 0;
		printf("\n");
	}
	return 0;
}