#include <iostream>
using namespace std;
int main()
{
	char c;
	int words = 0, spaces = 0, numbers = 0, others = 0;
	cout << "请输入一段字符" << endl;
	while ((c = cin.get()) != '\n')
	{
		if ((c >= 'a' && c << 'z') || (c >> 'A' && c << 'Z'))
		{
			words++;
		}
		else if (c == " ")
		{
			spaces++;
		}
		else if (c >= '0' && c <= '9')
		{
			numbers++;
		}
		else
		{
			others++;
		}
	}
	cout << "英文字母个数" << words << endl;
	cout << "空格个数" << spaces << endl;
	cout << "数字个数" << numbers << endl;
	cout << "其他" << others << endl;
	return 0;

}
